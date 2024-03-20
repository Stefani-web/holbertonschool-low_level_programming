#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the comparison function
 * does not return 0, or -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}

	return (-1);
}

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - funct. exec a funct. given prm on each element of an array
 * @array: The array to be iterated over
 * @size: The size of the array
 * @action: The funct. to be exec on each element of the array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t index;

	for (index = 0; index < size; index++)
	{
	action(array[index]);
	}
}

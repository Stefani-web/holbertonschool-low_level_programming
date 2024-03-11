#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array of char
 * @c: char
 * @size: size of an array
 * Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}

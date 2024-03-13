#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: size min
 * @max: size max
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int lenght, index;
	int *array;

	if (min > max)
		return (NULL);

	lenght = max - min + 1;

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (index = 0; index < lenght; index++)
		array[index] = min++;

	return (array);
}

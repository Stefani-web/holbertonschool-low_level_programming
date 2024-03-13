#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number
 * @size: size
 *
 * Return: object
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *object;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	object = malloc(size * nmemb);

	if (object == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
		object[index] = 0;

	return (object);
}

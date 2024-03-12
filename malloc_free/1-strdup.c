#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function that returns a pointer
 * @str: string of char
 *
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *copy;
	int lenght, index;

	if (str == NULL)
	return (NULL);

	for (lenght = 0; str[lenght] != '\0'; lenght++)

	copy = malloc(lenght + sizeof(char));

	if (copy == NULL)
	return (NULL);

	for (index = 0; index <= lenght; index++)
	{
		copy[index] = str[index];
	}
	return (copy);
}

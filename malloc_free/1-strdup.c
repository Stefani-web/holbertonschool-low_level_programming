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
	int lenght = 0, index;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index] != '\0'; index++)
	{
		lenght++;
	}

	copy = malloc(sizeof(char) * (lenght + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		copy[index] = str[index];
	}
	copy[lenght] = '\0';
	return (copy);
}

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

	if (str == NULL)
	return (NULL);

	copy = malloc(strlen(str) + 1);

	if (copy == NULL)
	return (NULL);

	strcpy(copy, str);

	return (copy);
}

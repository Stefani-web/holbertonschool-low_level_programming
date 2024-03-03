#include <stdio.h>
#include "main.h"

/**
 * *_strcat - Function that concatenates two strings.
 * @dest: pointer
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, len = 0;

	while (dest[index++])
	{
		len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[len++] = src[index];
	}
	return (dest);
}


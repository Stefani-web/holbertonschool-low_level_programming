#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - Function that copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 * *_strcpy
 *
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = ('\0');

	return (dest);
}


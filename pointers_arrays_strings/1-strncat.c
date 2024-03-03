#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: pointer
 * @src: string
 * @n: variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (dest[index++] != '\0')
	{
		len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[len++] = src[index];
	}
	return (dest);
}


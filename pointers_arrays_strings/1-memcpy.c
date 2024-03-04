#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @src: pointer
 * @dest: pointer
 * @n: unsigned int
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;
	int index;

	for (index = n - 1; index >= 0; index--)
		d[index] = s[index];
	return (dest);
}


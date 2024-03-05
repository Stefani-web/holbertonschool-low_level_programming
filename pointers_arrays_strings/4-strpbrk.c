#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: variable contains the string
 * @accept: the string checked
 *
 * Return: The letters that were found
 */

char *_strpbrk(char *s, char *accept)
{
	int index, index2;
	char *f;

	index = 0;

	while (s[index] != '\0')
	{
		index2 = 0;
		while (accept[index2] != '\0')
		{
			if (s[index] == accept[index2])
			{
				f = &s[index];
				return (f);
			}
			index2++;
		}
		index++;
	}
	return (0);
}


#include <stdio.h>
#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: string search
 * @c: char to be located
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (0);
}


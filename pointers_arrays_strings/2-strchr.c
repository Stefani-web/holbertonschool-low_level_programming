#include "main.h"

/**
 * *_strchr - Function that locates a character in a string
 * @*s: string to search
 * @c: the char to be locate
 *
 * Return: '\0'
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
	return ('\0');
}


#include <stdio.h>
#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: string checked
 * @accept: string checked
 *
 * Return: (index)
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (len = 0; accept[len]; len++)
		{
			if (s[index] == accept[len])
			{
				break;
			}
		}
		if (accept[len] == '\0')
		{
			break;
		}

	}
	return (index);
}


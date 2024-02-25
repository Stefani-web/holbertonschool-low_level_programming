#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 * @c: the character bring checker
 *
 * Return: 1 and 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}


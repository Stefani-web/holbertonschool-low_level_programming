#include "main.h"

/**
 * _isupper - Function that checks for lowercase character.
 * @c: the character bring checker
 *
 * Return: 1 and 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}


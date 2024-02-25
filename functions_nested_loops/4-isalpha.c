#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 * @c: the character bring checker
 *
 * Return: 1 and 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}


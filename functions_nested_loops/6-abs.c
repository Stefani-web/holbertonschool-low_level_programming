#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @n: The integer
 *
 * Return: -n is negative and n is positive
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}


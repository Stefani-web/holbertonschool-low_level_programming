#include <stdio.h>
#include "main.h"

/**
 * square - Function that returns the natural square root of a number.
 * Function that returns the natural square root of a num
 * @a : integer
 * @b : integer
 * Return: square(a, b + 1)
 */

int square(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (square(a, b + 1));
	}
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a num
 * Function that returns the natural square root of a num
 * @n : integer
 * Return: square(n, 1)
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}


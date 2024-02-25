#include "main.h"

/**
 * print_sign - Function that prints the sign of a number.
 * @n: the character being check
 *
 * Return: 1 is positive, -1 is negative or neutral
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}


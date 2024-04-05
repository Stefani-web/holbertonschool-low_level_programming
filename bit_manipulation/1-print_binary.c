#include <stdio.h>

/**
 * print_binary - Prints binary representO of a numb in rev. order
 * @n: the number to print in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
		putchar((n & 1) + '0');
}

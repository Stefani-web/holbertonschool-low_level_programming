#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Function that prints the numbers
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
}


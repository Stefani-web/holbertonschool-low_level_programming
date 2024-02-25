#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int ligne = 0;

	while (ligne < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		ligne++;
		_putchar('\n');
	}
}


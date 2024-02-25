#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - entry
 *
 * return: 0
 *
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		_putchar(letter);
	}
	putchar('\n');
}


#include "main.h"
#include <stdio.h>

/**
 * print_square - square
 * @size: size
 */

void print_square(int size)
{
	int app, square;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (app = 0; app < size; app++)
	{
		for (square = 0; square < size; square++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}


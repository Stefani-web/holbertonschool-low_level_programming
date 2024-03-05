#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: double array
 *
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}

}


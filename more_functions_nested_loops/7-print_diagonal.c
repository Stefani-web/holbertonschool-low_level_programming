#include "main.h"

/** print_diagonal - Function that draws a diagonal line
 * @n:
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int ligne, colonne;

	if (n > 0)
	{
		for (ligne = 1; ligne <= n; ligne++)
		{
			for (colonne = 1; colonne < ligne; colonne++)
			{
				_putchar(' ');
        		}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


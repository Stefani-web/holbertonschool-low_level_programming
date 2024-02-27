#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 *
 *
 * Return: 0
 */

void more_numbers(void)
{
	int figure, num;

	for (num = 0; num <= 9; num++)
	{
		for (figure = 0; figure <= 14; figure++)
		{
			if (figure >= 10)
			{
				_putchar((figure / 10) + '0');
			}
			_putchar((figure % 10) + '0');
		}
		_putchar('\n');
	}
}


#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse
 * @s: pointer
 *
 */

void print_rev(char *s)
{
	int lenght = 0, index;

	while (s[lenght] != '\0')
		lenght++;

	for (index = lenght - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}


#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int lenght = 0;
	int index = 0;
	int n;

	while (str[lenght] != '\0')
		lenght++;

	if (lenght % 2 == 0)
		n = lenght / 2;

	else
		n = (lenght + 1) / 2;

	for (index = n; index < lenght; index++)
		putchar(str[index]);

	putchar('\n');
}


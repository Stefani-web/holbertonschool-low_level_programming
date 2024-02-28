#include "main.h"
#include <stdio.h>

/**
 * _puts - Function that prints a string
 * @str: pointer string
 *
 * Return: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}


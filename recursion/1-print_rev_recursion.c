#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: spring
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

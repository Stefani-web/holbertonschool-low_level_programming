#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: integers to be printed
 *
 * Details: If separator is NULL, do not print it
 * Print a new line at the end of your function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));

		if (index < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);

	printf("\n");
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: strings to be printed
 *
 * Details: If separator is NULL, do not print it
 * If one of the strings is NULL, print (nil) instead
 * Print a new line at the end of your function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	char *str;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
		{
		printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (index < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);

	printf("\n");
}

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that prints numbers
 * @n: number of parameters to be summed
 * @...: parameters to be summed
 *
 * Return: The sum of all parameters, or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}

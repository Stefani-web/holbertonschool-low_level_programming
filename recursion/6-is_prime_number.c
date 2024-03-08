#include "main.h"

/**
 * _is_prime_number - returns 1 if the input integer is a prime number
 * Function that returns 1 if the input integer is a prime number
 * @n: number integer
 * @i: number to divide
 * Return: return 1 or 0
 */

int _is_prime_number(int n, int index)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == index)
	{
		return (1);
	}
	else if (n % index == 0)
	{
		return (0);
	}
	else
	{
		return (_is_prime_number(n, index + 1));
	}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * Function that returns 1 if the input integer is a prime number
 * @n: number integer
 * Return: return 1 or 0
 */

int is_prime_number(int n)
{
	return (_is_prime_number(n, 2));
}


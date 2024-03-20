#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two int
 * @a: first int
 * @b: second int
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two int
 * @a: first int
 * @b: second int
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- mul two int
 * @a: first int
 * @b: second int
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two int
 * @a: first int
 * @b: second int
 *
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a / b);
}

/**
 * op_mod - computes the modulo of two int
 * @a: first int
 * @b: second int
 *
 * Return: the modulo of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a % b);
}

#include <stdio.h>
#include "main.h"

/**
 * factorial - Function
 * @num: character
 *
 * Return: 0 or 1
 */

int factorial(int num)
{
	if (num < 0)
	{
		return (-1);
	}
	else if (num == 0 || num == 1)
	{	return (1);
	}
	else return (num * factorial (num - 1));
}


#include "main.h"

/**
 * flip_bits - Returns numb of bits you would need to flip to get from one
 * numb to another
 * @n: 1st numb
 * @m: scd numb
 *
 * Return: the numb of bits you would need to flip to get from @n to @m
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int opposite = n ^ m;
	unsigned int count = 0;

	while (opposite != 0)
	{
		count += opposite & 1;
		opposite >>= 1;
	}

	return (count);
}

#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get, starting from 0
 *
 * Description: This function uses the bitwise AND operator to isolate the bit
 * at the given index and then shifts it right by @index positions
 * to obtain its value. If @index is greater than or equal to the
 * number of bits in @n, the function returns -1 to indicate an error
 *
 * Return: the value of the bit at index @index, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (n >> index & 1);
}

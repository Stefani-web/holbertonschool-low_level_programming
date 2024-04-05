#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	for (; b[index] != '\0'; index++)
	{
		if (b[index] == '1')
		{
			num = num * 2 + 1;
		} else if (b[index] == '0')
		{
			num *= 2;
		} else
		{
			/* If the character is not 0 or 1, return 0 */
			return (0);
		}
	}

	return (num);
}

#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two integers
 * @a: swap to b
 * @b: swap to a
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;

}


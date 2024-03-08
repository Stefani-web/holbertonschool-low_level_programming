#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints diagsums
 * @a: integer pointer
 * @size: size of pointer
 */

void print_diagsums(int *a, int size)
{
	int i;
	int index0 = 0;
	int index1 = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[index0];
		sum2 += a[index1];
		index0 += size + 1;
		index1 += size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}


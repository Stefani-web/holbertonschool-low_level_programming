#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: size of malloc
 *
 * Return: Pointer to the malloc
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}

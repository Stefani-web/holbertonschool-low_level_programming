#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: size of allocates memory
 *
 * Return: Pointer to the allocates memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}

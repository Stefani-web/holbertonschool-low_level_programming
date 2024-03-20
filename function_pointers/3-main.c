#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point of the program
 * @argc: num of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, error code otherwise
 */

int main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	int a, b;

	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (*argv[2] == '/' && b ==0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", f(a, b));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "op_functions.c"

/**
 * main - entry point of the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, error code otherwise
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2][0]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = op_func(num1, num2);

	if (result == -1)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", result);

	return (0);
}

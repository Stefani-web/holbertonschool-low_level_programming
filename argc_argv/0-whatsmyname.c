#include <stdio.h>

/**
 * main - Program that prints its name
 * @argv: Var that contains the num of arguments
 * @argc: Var that contains the num of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}


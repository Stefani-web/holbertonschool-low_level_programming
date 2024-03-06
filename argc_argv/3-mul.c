#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: Arguments
 * @argv: double pointer
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}



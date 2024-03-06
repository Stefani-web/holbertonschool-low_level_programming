#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}


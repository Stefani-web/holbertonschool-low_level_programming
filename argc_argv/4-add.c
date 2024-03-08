#include <stdio.h>
#include <stdlib.h>

/**
* main - print add of number of arg
* @argc: size of argv
* @argv: array of program
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int index, jo, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (index = 1;  index < argc; index++)
	{
		for (jo = 0; argv[index][jo] != '\0'; jo++)
			if (argv[index][jo] < '0' || argv[index][jo] > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}


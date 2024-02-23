#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)

{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
	putchar(lettre);
	}

	if (lettre != 'q' && lettre != 'e')

	putchar('\n');

	return (0);
}


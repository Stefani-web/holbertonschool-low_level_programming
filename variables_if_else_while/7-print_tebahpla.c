#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	char lettre;

	for (lettre = 'z'; lettre >= 'a'; lettre--)
	{
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}


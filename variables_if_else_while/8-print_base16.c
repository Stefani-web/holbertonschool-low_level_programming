#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
int number = 0;
char lettre;
	for (number = 0; number <= 9; number++)
		{
		putchar('0' + number);
		}
	for (lettre = 'a'; lettre <= 'f'; lettre++)
		{
		putchar(lettre);
		}
	putchar('\n');
	return (0);
}


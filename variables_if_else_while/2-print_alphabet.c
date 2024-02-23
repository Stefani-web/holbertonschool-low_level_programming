#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)

{
char lettre;

	for (lettre = 'a'; lettre >= 'Z'; lettre++)
{
	putchar(lettre);
}
	putchar('\n');
	return (0);
}


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
	char majuscule;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	putchar(lettre);

	for (majuscule = 'A'; majuscule <= 'Z'; majuscule++)
	putchar(majuscule);

	putchar('\n');
	return (0);
}


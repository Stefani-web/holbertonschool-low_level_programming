#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry
 *
 * return: 0
 *
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		putchar(alphabet);
	}
	putchar('\n');

}


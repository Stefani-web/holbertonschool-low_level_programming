#include "main.h"

/**
 * rev_string - Function that prints a string, in reverse
 * @s: pointer
 *
 */

void rev_string(char *s)
{
	int lenght = 0, index = 0;
	char tempo;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (index = lenght - 1; index >= lenght / 2; index--)
	{
		tempo = s[index];
		s[index] = s[lenght - index - 1];
		s[lenght - index - 1] = tempo;
	}
}


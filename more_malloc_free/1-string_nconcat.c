#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: pointer of string 1
 * @s2: pointer of string 2
 * @n: number
 *
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lenght = n, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[index]; index++)
		lenght++;

	concat = malloc((lenght + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	lenght = 0;

	for (index = 0; s1[index]; index++)
		concat[lenght++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[lenght++] = s2[index];

	concat[lenght] = '\0';

	return (concat);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	return (NULL);

	copy = malloc(strlen(str) + 1);

	if (copy == NULL)
	return (NULL);

	strcpy(copy, str);

	return (copy);
}

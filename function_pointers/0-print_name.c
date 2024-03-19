#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function print name
 * @name: The name to print
 * @f: The function pointer to use for printing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name); /* appeler la fonction pointée par f avec name comme argument */
}

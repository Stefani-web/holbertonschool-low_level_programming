#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Function
 * details: get_op_func
 * @s: char
 *
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index = 0;

	while (ops[index].op != NULL && *ops[index].op != *s)
	{
		index++;
	}
	return (ops[index].f);
}

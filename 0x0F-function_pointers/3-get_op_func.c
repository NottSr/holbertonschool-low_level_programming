#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
/**
 * get_op_func - ptr to a function
 * @s: operatos passed as argument
 * Return: a + b (Success)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i] != 0)
	{
		if (ops->op == s)
		{
			return (ops[i]);
		}
		i++;
	}
	return (NULL);
}

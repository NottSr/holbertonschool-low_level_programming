#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function that calls functions
 * @name: string checked
 * @f: function checked
 * Return: void (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

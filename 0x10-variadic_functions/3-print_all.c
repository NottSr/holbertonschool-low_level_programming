#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print all the variables
 * @format: variables
 * Return: 0 (Success)
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, n = 5;
	va_list pall;
	get_ty gty[] = {
		{"c", char},
		{"i", int},
		{"f", float},
		{"s", char *}
	};
	va_start(pall, n);
	printf("%s", format);
	va_end pall;
}

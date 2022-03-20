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
	unsigned int i = 0, j;
	char *separator = "";
	va_list pall;
	get_ty get_type[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_str}
	};
	va_start(pall, format);
	while (format[i] && format != NULL)
	{
		j = 0;
		while (j <= 3)
		{
			if (format[i] == *get_type[j].type)
			{
				get_type[j].f(separator, pall);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(pall);
}
/**
 * pr_char - print char var
 * @separator: separator
 * @pall: variadic args
 * Return: (Success)
 */
void pr_char(char *separator, va_list pall)
{
	printf("%s%c", separator, va_arg(pall, int));
}
/**
 * pr_int - print int var
 * @separator: separator
 * @pall: variadic args
 * Return: (Success)
 */
void pr_int(char *separator, va_list pall)
{
	printf("%s%d", separator, va_arg(pall, int));
}
/**
 * pr_float - print float var
 * @separator: separator
 * @pall: variadic args
 * Return: (Success)
 */
void pr_float(char *separator, va_list pall)
{
	printf("%s%f", separator, va_arg(pall, double));
}
/**
 * pr_str - print char * var
 * @separator: separator
 * @pall: variadic args
 * Return: (Success)
 */
void pr_str(char *separator, va_list pall)
{
	char *str = va_arg(pall, char *);

	if (str == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, str);
}

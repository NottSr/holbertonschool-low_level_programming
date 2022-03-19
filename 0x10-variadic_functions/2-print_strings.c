#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print the variables
 * @separator: separator
 * @n: variables
 * Return: 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	char *str;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(ps, n);
		while (i < n)
		{
			str = va_arg(ps, char *);
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
			i++;
		}
		printf("\n");
		va_end(ps);
	}
}

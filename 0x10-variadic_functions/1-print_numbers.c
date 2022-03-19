#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print the variables
 * @separator: separator
 * @n: variables
 * Return: 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int i = 0;

	if (separator != NULL && n != 0)
	{
		va_start(pn, n);
		while (i < n)
		{
			printf("%i", va_arg(pn, const unsigned int));
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
			i++;
		}
		printf("\n");
		va_end(pn);
	}
}

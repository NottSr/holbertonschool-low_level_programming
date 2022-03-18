#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum the variables
 * @n: variables
 * Return: sum (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumall;
	unsigned int i = 0, sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(sumall, n);

	sum = 0;
	while (i < n)
	{
		sum += va_arg(sumall, const unsigned int);
		i++;
	}

	va_end(sumall);
	return (sum);
}

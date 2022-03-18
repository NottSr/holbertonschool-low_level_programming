#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list sumall;
	unsigned int i = 0, sum;

	va_start (sumall, n);

	sum = 0;
	while (i < n)
	{
		sum += va_arg (sumall, const unsigned int);
		i++;
	}

	va_end (sumall);
	return (sum);
}

#include "main.h"

/**
 * print_last_digit - check the code
 * @a: int checked and result
 * Return: Always a.
 */
int print_last_digit(int a)
{
	int n = -1;

	if (a < 0)
	{
		a = a * n;
		a = a % 10;
		_putchar('0' + a);
		return (a);
	}
	else
	{
		a = a % 10;
		_putchar('0' + a);
		return (a);
	}
}

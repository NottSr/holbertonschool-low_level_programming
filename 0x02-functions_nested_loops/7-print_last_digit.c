#include "main.h"

/**
 * print_last_digit - check the code
 * @a: int checked and result
 * Return: Always a.
 */
int print_last_digit(int a)
{
	if (a > 0)
	{
		a = a % 10;
		_putchar('0' + a);
	}
	else if (a < 0)
	{
		a = a * -1;
		a = a % 10;
		_putchar('0' + a);
	}
	else
	{
		_putchar('0' + a);
	}
	return (a);
}

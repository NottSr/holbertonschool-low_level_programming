#include "main.h"

/**
 * print_last_digit - check the code
 * @a: int checked and result
 * Return: Always a.
 */
int print_last_digit(int a)
{
	int cn = 0;
	long b = a;

	if (b < 0)
	{
		cn = a - (a + (a));
		a = cn % 10;
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

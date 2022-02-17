#include "main.h"

/**
 * print_last_digit - check the code
 * @a: int checked
 * Return: Always r with the result
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = (a % 10) * (-1);
	}
	else
	{
		a = a % 10;
	}
	_putchar('0' + a);
	return (a);
}

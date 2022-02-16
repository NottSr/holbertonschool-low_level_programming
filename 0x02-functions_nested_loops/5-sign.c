#include "main.h"
/**
 * print_sign - Entry point
 * @n: The sign to print
 * Return: Always 1 if, or 0 if otherwise (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

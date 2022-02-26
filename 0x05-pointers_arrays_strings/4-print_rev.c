#include "main.h"
/**
 * print_rev - Entry point
 * @s: variable with string checked 
 * Return: Always s (Success)
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	i = i - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

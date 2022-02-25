#include "main.h"
/**
 * _puts - Entry point
 *
 * Return: Always str (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

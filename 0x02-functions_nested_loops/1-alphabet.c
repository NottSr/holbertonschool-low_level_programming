#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 0;
	char l[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i <= 25)
	{
		_putchar(l[i]);
		i++;
	}
	_putchar('\n');
}

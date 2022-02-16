#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char l[26] = "abcdefghijklmnopqrstuvwxyz";

	while (j <= 10)
	{
		int i = 0;

		while (i <= 25)
		{
			_putchar(l[i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}

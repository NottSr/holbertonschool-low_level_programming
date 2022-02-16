#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int a = 0;

	while (a < 24)
	{
		int b = 0;

		while (b < 60)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar('\n');
			b++;
		}
		a++;
	}
}

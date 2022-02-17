#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0, k = 0;

	while (i < 10)
	{
	       int j = 0;

		while (j < 10)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar('0' + k);
			}
			else 
			{
				if (k < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

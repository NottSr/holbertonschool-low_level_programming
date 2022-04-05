#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - binary to unsigned int
 * @n: number checked
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

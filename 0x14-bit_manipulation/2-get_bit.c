#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - get bit asked
 * @n: number checked
 * @index: index
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

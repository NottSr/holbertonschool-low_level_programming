#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - clear bit asked
 * @n: number checked
 * @index: index
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}

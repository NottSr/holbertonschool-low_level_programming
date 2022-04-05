#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - add 1 bit
 * @n: ptr to number checked
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n ^= (1 << index);

	return (1);
}

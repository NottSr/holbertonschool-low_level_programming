#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - flip bits asked
 * @n: number checked
 * @m: 2nd number checked
 * Return: Always fbits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int aux = 0, fbits = 0;

	aux = n ^ m;
	while (aux > 0)
	{
		fbits += (aux & 1);
		aux >>= 1;
	}
	return (fbits);
}

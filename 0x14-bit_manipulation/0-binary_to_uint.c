#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: binary number checked
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0, num = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	while (i--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		if (b[i] == 49)
			sum += 1 << num;

		num++;
	}
	return (sum);
}

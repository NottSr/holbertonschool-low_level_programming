#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: array to check
 * @size: size of array
 * Return (Success)
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[((i * size) + i)];
		sum2 += a[((i * size) + (size - i) - 1)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}

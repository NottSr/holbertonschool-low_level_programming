#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 * @min: min value
 * @max: max value
 * Return: ar or NULL (Success)
 */
int *array_range(int min, int max)
{
	int i = 0, size = 0, *ar;

	if (min > max)
	{
		return (NULL);
	}
	while (max >= (min + size))
	{
		size++;
	}
	ar = malloc(sizeof(int) * (size + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(ar + i) = min + i;
		i++;
	}
	*(ar + i) = '\0';
	return (ar);
}

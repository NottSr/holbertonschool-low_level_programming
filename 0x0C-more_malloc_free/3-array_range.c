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
	int i = 0, *ar;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		*(ar + i) = min;
		min++;
		i++;
	}
	return (ar);
}

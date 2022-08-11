#include "search_algos.h"
/**
 * print_array - Function that prints array indexes
 *
 * @inf: Bottom index
 * @sup: Top index
 *
 * Return: void
 */
void print_array(size_t inf, size_t sup)
{
	size_t i = inf;

	printf("Searching in array: ");

	while (i <= sup)
	{
		if (i != inf)
			printf("%ld, ", i);
		else
			printf("%ld", i);
		i++;
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located or -1 if error
 */
int binary_search(int *array, size_t size, int value)
{
	size_t inf = 0, cen = 0, sup = size - 1;

	if (!array)
		return (-1);

	while (inf <= sup)
	{
		print_array(inf, sup);

		cen = (sup + inf) / 2;

		if (value == array[cen])
			return (cen);

		if (value < array[cen])
			sup = cen - 1;
		else
			inf = cen + 1;
	}

	return (-1);
}

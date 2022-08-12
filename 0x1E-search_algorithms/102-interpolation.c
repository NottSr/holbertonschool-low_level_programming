#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located or -1 if error
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, pos = 0, high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        if (array[high] < value)
            break;

        printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return pos;

        if (array[pos] < value)
            low = pos + 1;

        if (array[pos] > value)
            high = pos - 1;
    }

    printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}

#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Function that calls functions based on an array
 * @array: array checked
 * @size: size of array
 * @action: function checked
 * Return: void (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size)
	{
		if (size != '\0')
		{
			action(array[i]);
		}
		i++;
	}
}

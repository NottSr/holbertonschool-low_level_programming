#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Function that calls functions
 * @array: array checked
 * @size: size of array checked
 * @cmp: fuction checked
 * Return: ind (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}

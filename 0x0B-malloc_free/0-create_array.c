#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: Array size checked
 * @c: char to start the array value with
 * Return: Always ar (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	if (size == 0)
	{
		return (NULL); /*if array is equal to 0*/
	}
	ar = malloc(sizeof(*ar) * size); /*asign the size plus one*/
	while (i < size)
	{
		*(ar + i) = c; /*while i less than size, assign c to ar plus i*/
		i++;
	}
	*(ar + i) = '\0';
	return (ar);
}

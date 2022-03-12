#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: size for the assignment
 * Return: the pointer (Success)
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b); /*assign memory to ptr*/
	if (ptr == NULL)
	{
		exit(98);/*if new pointer NULL then exit 98*/
	}
	return (ptr);
}

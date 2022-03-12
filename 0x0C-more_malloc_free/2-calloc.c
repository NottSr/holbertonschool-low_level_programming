#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Entry point
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: the pointer (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while(i < (nmemb * size))
	{
		*(ptr + i) = 0;
		i++;
	}
	return (ptr);
}

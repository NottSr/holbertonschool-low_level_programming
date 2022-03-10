#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 * @s1: String checked (dest)
 * @s2: String checked (source)
 * Return: Always s1 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size = 0, dlen_s1 = 0, dlen_s2 = 0;
	char *s3;

	dlen_s1 = _counter(s1, i);
	dlen_s2 = _counter(s2, i);
	size = dlen_s1 + dlen_s2 + 1;
	s3 = malloc(sizeof(char) * size); /*asign the size*/
	if (s3 == NULL)
	{
		return (NULL);
	}

	while (i < dlen_s1)
	{
		*(s3 + i) = *(s1 + i);
		i++;
	}

	while (j < dlen_s2)
	{
		*(s3 + i) = *(s2 + j);
		i++;
		j++;
	}
	*(s3 + (size + 1)) = '\0';
	return (s3);
}

/**
 * _counter - Count the bytes of the array
 * @ar: string checked
 * @i: length of the array
 * Return: i (Success)
 */
unsigned int _counter(char *ar, unsigned int i)
{
	if (*ar == 0)
	{
		return (i);
	}
	return (_counter(ar + 1, i + 1));
}

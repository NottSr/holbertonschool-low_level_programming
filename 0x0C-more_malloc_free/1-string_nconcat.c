#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * @s1: String checked (dest)
 * @s2: String checked (source)
 * @n: Limit
 * Return: Always s1 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, dlen_s1 = 0, dlen_s2 = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	dlen_s1 = _counter(s1, i);
	dlen_s2 = _counter(s2, i);
	if (n > dlen_s2)
	{
		n = dlen_s2;
	}
	s3 = malloc(dlen_s1 + (n + 1)); /*asign the size*/
	if (s3 == NULL)
	{
		return (NULL);
	}

	while (i < dlen_s1)
	{
		*(s3 + i) = *(s1 + i);
		i++;
	}

	while (j < n)
	{
		*(s3 + i) = *(s2 + j);
		i++;
		j++;
	}
	*(s3 + (dlen_s1 + (n + 1)) = '\0';
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

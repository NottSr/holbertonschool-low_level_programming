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
	unsigned int i = 0, j = 0, ls1 = 0, ls2 = 0, ls3 = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ls1 = _counter(s1, i);
	ls2 = _counter(s2, i);
	if (n > ls2)
	{
		n = ls2;
	}
	ls3 = ls1 + n;
	s3 = malloc(ls3 + 1); /*asign the size*/
	if (s3 == NULL)
	{
		return (NULL);
	}

	while (i < ls1)
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
	*(s3 + i) = '\0';
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

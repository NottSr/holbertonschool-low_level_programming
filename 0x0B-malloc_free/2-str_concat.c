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
	unsigned int i = 0, size = 0, dlen_s1 = 0, dlen_s2 = 0;

	while (s1[i])
	{
		i++;
	}

	dlen_s1 = i;
	i = 0;

	while (s2[i])
        {
                i++;
        }

        dlen_s2 = i;
	i = 0;
	size = dlen_s1 + dlen_s2;
	s1 = malloc(sizeof(*s1) * size); /*asign the size*/

	if (s1 == NULL)
	{
		return (NULL);
	}

	while (i < dlen_s2)
	{
		*(s1 + (dlen_s1 + i)) = s2[i];
		i++;
	}

	return (s1);
}

#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Entry point
 * @str: string to copy
 * Return: Always ar (Success)
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dstr;

	if (str == NULL)
	{
		return (NULL);
	}
	
	while (*(str + i))
	{
		i++;
	}
	
	len = i + 1;
	i = 0;
	dstr = malloc(sizeof(*str) * len);
	
	if (dstr == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		*(dstr + i) = *(str + i); /*while i less than size, assign str + i to dstr + i*/
		i++;
	}
	return (dstr);
}

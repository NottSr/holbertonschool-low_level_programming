#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: first variable checked
 * @s2: sec variable checked
 * Return: Always res (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, res = 0, len;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (i <= j)
	{
		len = i;
	}
	else
	{
		len = j;
	}
	i = 0;
	while (i <= len)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			res = s1[i] - s2[i];
			i = len + 1;
		}
	}
	return (res);
}

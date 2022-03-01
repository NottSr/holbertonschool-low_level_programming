#include "main.h"
/**
 * _strchr - Entry point
 * @s: Array checked
 * @c: Char to detect
 * Return: Always s (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[i])
	{
		i++;
	}

	while (j <= i)
	{
		if (s[j] == c)
		{
			s = s + j;
			return (s);
		}
		j++;
	}
	return ('\0');
}

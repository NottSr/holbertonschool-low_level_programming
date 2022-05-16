#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: pointer with string to check
 * @accept: pointer with chars to check
 * Return: s or '\0' (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	while (s[j])
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == s[j])
			{
				s += j;
				return (s);
			}
			i++;
		}
		j++;
	}
	return ('\0');
}

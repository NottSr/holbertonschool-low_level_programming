#include "main.h"
/**
 * _strspn - Entry point
 * @s: pointer with string to check
 * @accept: pointer with chars to check
 * Return: Always len (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j = 0;
	unsigned int len = 0;

	while (s[j])
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == s[j])
			{
				len++;
			}
			i++;
		}
		if (s[j] == ' ')
		{
			break;
		}
		j++;
	}
	return (len);
}

#include "main.h"
/**
 * cap_string - Entry point
 * @p: variable checked to be returned
 * Return: Always p (Success)
 */
char *cap_string(char *p)
{
	int i = 0, j;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (p[i])
	{
		j = 0;

		while (j < cspc)
		{
			if ((i == 0 || p[i - 1] == spc[j]) && (p[i] >= 97 && p[i] <= 122))
			{
				p[i] = p[i] - 32;
			}
			j++;
		}
		i++;
	}
	return (p);
}

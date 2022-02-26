#include "main.h"
/**
 * rev_string - Entry point
 * @s: variable checked
 * Return: Always s (Success)
 */
void rev_string(char *s)
{
	int i = 0, slen, aux;

	while (s[i])
	{
		i++;
	}
	slen = i;
	i = 0;
	while (i < slen / 2)
	{
		aux = s[i];
		s[i] = s[slen - i - 1];
		s[slen - i - 1] = aux;
		i++;
	}
}

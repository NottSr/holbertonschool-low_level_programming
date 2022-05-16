#include "main.h"
/**
 * _strncat - Entry point
 * @dest: first variable checked
 * @src: sec variable checked
 * @n: n bytes
 * Return: Always dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dlen;

	while (dest[i])
	{
		i++;
	}
	dlen = i;
	i = 0;
	while (i < n && src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strcat - Entry point
 * @dest: first variable checked
 * @src: sec variable checked
 * Return: Always dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dlen;

	while (dest[i])
	{
		i++;
	}
	dlen = i;
	i = 0;
	while (src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}

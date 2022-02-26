#include "main.h"
/**
 * main - Entry point
 * @dest: first variable checked
 * @src: sec variable checked
 * @n: number of bytes
 * Return: Always dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

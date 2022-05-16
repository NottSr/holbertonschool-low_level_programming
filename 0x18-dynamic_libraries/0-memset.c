#include "main.h"
/**
 * _memset - Entry point
 * @s: Array checked
 * @b: Char checked
 * @n: Number of bytes to be re-write
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

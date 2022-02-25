#include "main.h"
/**
 * _strlen - Entry point
 * @s: string checked
 * Return: Always @count (Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: character checked
 * Return: (Success)
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

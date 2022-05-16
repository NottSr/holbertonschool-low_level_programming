#include "main.h"
/**
 * _isalpha - Entry point
 * @c: The character to print
 * Return: Always 1 if letter, lower or uppercase, or 0 if otherwise (Success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

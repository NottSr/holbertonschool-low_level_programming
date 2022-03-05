#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: The character to print
 *
 * Return: Always 1 if lowercase, or 0 if otherwise (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

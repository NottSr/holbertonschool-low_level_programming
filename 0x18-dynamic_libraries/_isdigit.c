#include "main.h"
/**
 * _isdigit - Entry point
 * @c: variable checked
 * Return: 0 or 1 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

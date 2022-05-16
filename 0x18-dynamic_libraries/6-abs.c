#include "main.h"
/**
 * _abs - Entry point
 *
 * @a: int to check
 *
 * Return: Always a (Success)
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		return (a);
	}
}

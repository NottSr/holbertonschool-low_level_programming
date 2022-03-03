#include "main.h"
/**
 * sqrt_count - Entry point
 * @i: int checked
 * @j: int checked to multiply
 * Return: (Success)
 */
int sqrt_count(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	if (j * j > i)
	{
		return (-1);
	}
	return (sqrt_count(i, j + 1));
}
/**
 * _sqrt_recursion - Entry point
 * @n: int checked
 * Return: (Success)
 */
int _sqrt_recursion(int n)
{
	return (sqrt_count(n, 1));
}

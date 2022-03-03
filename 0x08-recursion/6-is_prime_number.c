#include "main.h"
/**
 * prime_count - Entry point
 * @i: int checked
 * @j: int checked upgraded by 1 to find prime
 * Return: (Success)
 */
int prime_count(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (prime_count(i, j + 1));
}
/**
 * is_prime_number - Entry point
 * @n: int checked
 * Return: (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_count(n, 2));
}

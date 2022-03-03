#include "main.h"
/**
 * str_comparer - String comparer
 * @ar: string checked
 * @i: length of ar
 * Return: 0 or 1 (Success)
 */
int str_comparer(char *ar, int i)
{
	if (*ar != *(ar + i))
	{
		return (0);
	}
	if (*ar == 0)
	{
		return (1);
	}
	return (str_comparer(ar + 1, i - 2));
}
/**
 * the_counter - Count the bytes of the array
 * @ar: string checked
 * @i: length of the array
 * Return: i (Success)
 */
int the_counter(char *ar, int i)
{
	if (*ar == 0)
	{
		return (i - 1);
	}
	return (the_counter(ar + 1, i + 1));
}
/**
 * is_palindrome - Entry point
 * @s: string checked
 * Return: 1 or 0 (Success)
 */
int is_palindrome(char *s)
{
	int len;

	len = the_counter(s, 0);
	return (str_comparer(s, len));
}

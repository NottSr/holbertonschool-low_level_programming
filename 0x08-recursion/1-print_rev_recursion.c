#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: character checked to print
 * Return: (Success)
 */
void _print_rev_recursion(char *s)
{
	if (!s || !*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

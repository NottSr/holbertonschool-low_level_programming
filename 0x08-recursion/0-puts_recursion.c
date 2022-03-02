#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s: character checked to print
 * Return: _puts_recursion(s + 1) (Success)
 */
void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

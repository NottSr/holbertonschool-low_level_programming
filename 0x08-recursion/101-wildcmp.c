#include "main.h"
/**
 * wildcmp - Main entry
 * @s1: first string checked
 * @s2: second string checked
 * Return: 0 or 1 (Success)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 +1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}

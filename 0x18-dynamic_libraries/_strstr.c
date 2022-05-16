#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: pointer with string to check
 * @needle: pointer with chars to check
 * Return: Always haystack plus j (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[j])
	{
		while (needle[i])
		{
			if (haystack[j + i] != needle[i])
			{
				break;
			}
			i++;
		}
		if (needle[i] == '\0')
		{
			return (haystack + j);
		}
		j++;
	}
	return ('\0');
}

#include "main.h"
/**
  * leet - Entry point to encodes into 1337
  * @s: variable checked to return
  * Return: always s (Success)
  */
char *leet(char *s)
{
	int i = 0, j, len = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < len)
		{
			if (s[i] == r[j] || s[i] - 32 == r[j])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}

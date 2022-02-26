#include "main.h"
/**
  * rot13 - Entry point to encodes into Rot13
  * @s: variable checked to return
  * Return: always s (Success)
  */
char *rot13(char *s)
{
	int i = 0, j, aux = 0;
	char r[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		j = 0;

		while (r[j] && aux == 0)
		{
			if (s[i] == r[j])
			{
				s[i] = n[j];
				aux = 1;
			}
			j++;
		}
		i++;
	}
	return (s);
}

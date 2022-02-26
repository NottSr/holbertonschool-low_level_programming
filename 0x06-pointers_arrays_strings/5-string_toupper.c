#include "main.h"
/**
 * string_toupper - Entry point
 * @p: variable checked to be returned
 * Return: Always p (Success)
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 'a' && p[i] <= 'z') /*All lowercase characters ASCII value is from 97 to 122*/
		{
			p[i] = p[i] - 32; /*So we substract 32 to convert lower to upper*/
		}
		i++;
	}
	return (p);
}

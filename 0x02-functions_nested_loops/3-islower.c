#include "main.h"
/**
 * _islower - check the lowercase character
 * parameter or member - int 'c' is the unnasigned char or EOF
 * Return: If it's 1, is a lowercase, else, is 0 and uppercase
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

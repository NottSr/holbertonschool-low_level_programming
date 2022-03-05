#include <stdio.h>
#include "main.h"
/**
 * my_name - Entry point
 * @argc:
 * @argv:
 * Return: Always 0 (Success)
 */
int my_name(int argc, char* argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf(argv[i], '\n');
		i++;
	}
	return (0);
}

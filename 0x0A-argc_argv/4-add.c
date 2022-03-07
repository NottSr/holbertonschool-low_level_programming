#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number
 * @argv: string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 1, j, add = 0, len = 0;
	char *aux;

	while (i < argc)
	{
		j = 0;
		aux = argv[i];
		len = strlen(aux);

		while (j < len)
		{
			if (isdigit(*(aux + j)) == 0)
			{
				printf("Error\n");
				return (0);
			}
			j++;
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}

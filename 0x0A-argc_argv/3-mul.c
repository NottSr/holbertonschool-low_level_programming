#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number
 * @argv: string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 1, mul = 1;
	
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (0);
	}

	while (i < 3)
	{
		mul *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", mul);
	return (0);
}

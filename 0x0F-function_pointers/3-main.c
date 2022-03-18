#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: number of elemets
 * @argv: elements checked
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = get_op_func(argv[2]);
	if (opr == 0)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", opr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

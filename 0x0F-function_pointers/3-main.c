#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#define UNUSED(x) (void)(x)
/**
 * main - Entry point
 * @argc: number of elemets (UNUSED)
 * @argv: elements checked
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);

	printf("%d", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

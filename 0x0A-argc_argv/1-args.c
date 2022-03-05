#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
 * main - Entry point
 * @argc: number
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	UNUSED(*argv);
	printf("%d\n", argc - 1);
	return (0);
}

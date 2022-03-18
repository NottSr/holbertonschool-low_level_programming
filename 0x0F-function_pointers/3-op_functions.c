#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - sum of a and b
 * @a: first int
 * @b: second int
 * Return: a + b (Success)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub of a and b
 * @a: first int
 * @b: second int
 * Return: a - b (Success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul of a and b
 * @a: first int
 * @b: second int
 * Return: a * b (Success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div result of a and b
 * @a: first int
 * @b: second int
 * Return: a / b (Success)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of a and b
 * @a: first int
 * @b: second int
 * Return: a % b (Success)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

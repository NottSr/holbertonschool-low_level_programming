#include "main.h"
/**
 * swap_int - Entry point
 * @a: first variable checked
 * @b: second variable checked
 * Return: Always a and b (Success)
 */
void swap_int(int *a, int *b)
{
	int stor1, stor2;

	stor1 = *a;
	stor2 = *b;
	*a = stor2;
	*b = stor1;
}

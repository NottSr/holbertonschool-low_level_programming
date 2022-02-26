#include "main.h"
/**
 * reverse_array - Entry point
 * @a: first variable checked
 * @n: n bytes
 * Return: (Success)
 */
void reverse_array(int *a, int n)
{
	int i = 1, j = 0, *p, aux;

	p = a;
	while (i < n)
	{
		p++;
		i++;
	}
	while (j < i / 2)
	{
		aux = a[j];
		a[j] = *p;
		*p = aux;
		p--;
		j++;
	}
}

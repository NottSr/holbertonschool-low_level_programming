#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - Print list
 * @h: constant list
 * Return: i (Success)
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

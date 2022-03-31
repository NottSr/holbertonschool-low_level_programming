#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - Return number of nodes
 * @h: constant list
 * Return: i (Success)
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
		{
			i++;
		}
		h = h->next;
	}
	return (i);
}

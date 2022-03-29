#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - print the nodes
 * @h: pointer to the linked list
 * Return: Success
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

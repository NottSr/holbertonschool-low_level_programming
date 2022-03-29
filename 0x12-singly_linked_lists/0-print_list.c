#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print the nodes
 * @h: pointer to the linked list
 * Return: Success
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}

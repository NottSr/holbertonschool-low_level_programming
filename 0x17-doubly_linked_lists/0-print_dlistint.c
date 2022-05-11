#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a list.
 * @h: list
 * Return: the number of nodes (Success)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}

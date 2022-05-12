#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position.
 * @h: list
 * @idx: index
 * @n: int to add into the new node
 * Return: the address of the new node (Success)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev = *h;
	unsigned int i = 0;

	while (prev)
	{
		if (i == idx)
			break;

		i++;
		prev = prev->next;
	}
	if (i < idx)
		return (NULL);
	
	prev = prev->prev;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->next = prev->next;
	prev->next = new;
	new->prev = prev;
	if (new->next != NULL)
        (new->next)->prev = new;

	return (new);
}

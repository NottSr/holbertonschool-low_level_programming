#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at index.
 * @h: list
 * @idx: index
 * @n: int to add into the new node
 * Return: the address of the new node (Success)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i = 1;

	if (*h)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		current = *h;
		while (current)
		{
			if (i == idx)
			{
				new->n = n;
				new->next = current->next;
				current->next = new;
				new->prev = current;
				if (new->next != NULL)
					(new->next)->prev = new;
				return (new);
			}
			current = current->next;
			i++;
		}
		new->next = *h;
		*h = new;
		return (new);
	}
	return (NULL);
}

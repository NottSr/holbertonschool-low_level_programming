#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list.
 * @head: list
 * @index: index
 * Return: void
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}

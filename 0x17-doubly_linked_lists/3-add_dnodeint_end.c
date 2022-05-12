#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 * @head: list
 * @n: int to add into the new node
 * Return: the address of the new node (Success)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;
	return (last);
}

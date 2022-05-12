#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list.
 * @head: list
 * @n: int to add into the new node
 * Return: the address of the new node (Success)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}

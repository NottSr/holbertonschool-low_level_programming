#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: list
 * @n: const int checked
 * Return:  (Success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = NULL;
	listint_t *aux = NULL;

	if (head)
	{
		current = malloc(sizeof(listint_t));
		if (current == NULL)
			return (NULL);

		current->n = n;
		current->next = NULL;

		if (*head == NULL)
		{
			*head = current;
			return (*head);
		}
		else
		{
			aux = *head;
			while (aux->next)
				aux = aux->next;
			aux->next = current;
			return (aux);
		}
	}
	return (NULL);
}

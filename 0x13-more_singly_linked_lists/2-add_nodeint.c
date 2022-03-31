#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Print list
 * @head: constant list
 * @n: const int checked
 * Return:  (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = NULL;

	if (head)
	{
		current = malloc(sizeof(listint_t));
		if (current == NULL)
			return (NULL);

		current->n = n;
		current->next = *head;
		*head = current;
		return (current);
	}
	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node
 * @head: list
 * @index: index of the node to delete
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *node = *head;
	unsigned int i = 1;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	aux = *head;
	while (aux)
	{
		if (i == index)
		{
			node = aux->next;
			aux->next = node->next;
			free(node);
			return (1);
		}
		aux = aux->next;
		i++;
	}

	return (-1);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a node in idx position
 * @head: list
 * @idx: index where the node will be located
 * @n: int checked
 * Return: (Success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int i = 1;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		current = *head;
		while (current)
		{
			if (i == idx)
			{
				new_node->next = current->next;
				current->next = new_node;
				return (new_node);
			}
			current = current->next;
			i++;
		}
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}

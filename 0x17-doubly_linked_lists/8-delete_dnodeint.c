#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list
 * @head: list
 * @index: index
 * Return: 1 success -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *node = *head;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(node->next)->prev = NULL;
			*head = node->next;
		}
		else
			*head = NULL;
		free(node);
		return (1);
	}
	while (i < index - 1 && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (node == NULL || node->next == NULL)
		return (-1);

	if ((node->next)->next != NULL)
		((node->next)->next)->prev = node;

	aux = (node->next)->next;
	free(node->next);
	node->next = aux;

	return (1);
}

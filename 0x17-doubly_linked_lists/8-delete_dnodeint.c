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
	unsigned int i = 1;

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
	aux = *head;
	while (aux)
	{
		if (i == index)
		{
			node = aux->next;
			aux->next = node->next;
			if (node->prev != NULL)
				(node->next)->prev = aux;
			free(node);
			break;
		}
		aux = aux->next;
		i++;
	}
	if (node == NULL || node->next == NULL)
		return (-1);
	return (1);
}

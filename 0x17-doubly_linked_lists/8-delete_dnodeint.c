#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list
 * @head: list
 * @index: index
 * Return: 1 success -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	aux = *head;
	while (aux)
	{
		if (i == index)
		{
			aux->next->prev = aux->prev;
			aux->prev->next = aux->next;
			free(aux);
			return (1);
		}
		aux = aux->next;
		i++;
	}
	return (-1);
}

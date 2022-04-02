#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Free list
 * @head: constant list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head)
	{
		while (*head)
		{
			aux = (*head);
			*head = (*head)->next;
			free(aux);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = NULL;
}

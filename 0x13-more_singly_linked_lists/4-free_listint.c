#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Free list
 * @head: constant list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}

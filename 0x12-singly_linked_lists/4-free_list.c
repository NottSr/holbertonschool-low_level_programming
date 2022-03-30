#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free the list
 * @head: pointer to the linked list
 * Return: Success
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
	free(head);
}

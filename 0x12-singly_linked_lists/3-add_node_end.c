#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add nodes at the end
 * @head: ptr to the ptr of a linked list
 * @str: ptr to a const string
 * Return: NULL or head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	char *dstr = NULL;
	list_t *current = NULL;
	list_t *aux = NULL;

	if (str != NULL)
	{
		dstr = strdup(str);
		while (dstr[i])
			i++;

		current = malloc(sizeof(list_t));
		current->str = dstr;
		current->len = i;
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

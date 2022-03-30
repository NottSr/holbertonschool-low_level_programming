#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add nodes
 * @head: ptr to the ptr of a linked list
 * @str: ptr to a const string
 * Return: NULL or head
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *dstr = NULL;
	list_t *current = NULL;

	if (head != NULL && str != NULL)
	{
		dstr = strdup(str);
		while (dstr[i])
			i++;

		current = malloc(sizeof(list_t));
		if (current == NULL)
			return (NULL);

		current->str = dstr;
		current->len = i;
		current->next = *head;
		*head = current;
	}
	return (current);
}

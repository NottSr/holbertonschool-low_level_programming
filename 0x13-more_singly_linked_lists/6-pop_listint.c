#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Free list
 * @head: list
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *ch_head;
	int n = 0;

	if (*head)
	{
		ch_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = ch_head;
	}

	return (n);
}

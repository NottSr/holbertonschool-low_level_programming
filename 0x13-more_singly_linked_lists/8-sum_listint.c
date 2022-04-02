#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum nodes in n
 * @head: list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - Returns sum of all data(n) of list.
 * @head: pointer to list head.
 * Return: sum of data.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	int data = 0;

	if (head)
	{
		node = head;
		while (node && node->next)
		{
			data += node->n;
			node = node->next;
		}
		data += node->n;
	}
	return (data);
}

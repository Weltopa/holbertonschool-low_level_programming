#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - length of doubly linked list.
 * @h: pointer to the head of the list.
 * Return: # of nodes in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t node_count;

	if (h == NULL)
		return (0);
	temp = h;
	for (node_count = 0; temp != NULL; node_count++)
		temp = temp->next;
	return (node_count);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dlistint_len - length of doubly linked list.
 * @h: pointer to the head of the list.
 * Return: # of nodes in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	unsigned int node = 0;

	if (h)
	{
		current = h;
		while (current)
		{
			node++;
			current = current->next;
		}
	}
	return (node);
}

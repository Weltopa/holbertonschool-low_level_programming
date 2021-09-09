#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts node at given position.
 * @h: pointer to list head.
 * @idx: index of node.
 * @n: data for node.
 * Return: pointer to new node if successful, NULL if failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = NULL;

	if (h)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		temp = *h;
		if (idx > 0)
		{
			for (; idx > 1 && temp; idx--)
				temp = temp->next;
			if (!temp)
				return (NULL);
			new->next = temp->next;
			new->prev = temp;
			if (temp->next)
				temp->next->prev = new;
			temp->next = new;
		}
		else
		{
			new->next = *h;
			if (temp)
				temp->prev = new;
			*h = new;
		}
	}
	return (new);
}

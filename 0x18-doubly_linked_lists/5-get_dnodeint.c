#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Return the nth node of list.
 * @head: pointer to list head.
 * @index: node index.
 * Return: node at index if successful, NULL if failure.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *targetNode = NULL;
	unsigned int x = 0;

	if (head)
	{
		targetNode = head;
		for (x = 0; x < index; x++)
		{
			if (!targetNode)
				return (NULL);
			targetNode = targetNode->next;
		}
	}
	return (targetNode);
}

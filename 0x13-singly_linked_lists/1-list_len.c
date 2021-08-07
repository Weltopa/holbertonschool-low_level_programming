#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts parts of list.
 * @h: Head.
 *
 * Return: number of nodes.
 */

size_t list_len(const list_t *h
{
	const list_t *ptr = h;
	size_t node_count = 0;

	while (ptr != NULL)
	{
		node_count++;
		ptr = ptr->next;
	}
	return (node_count);
}

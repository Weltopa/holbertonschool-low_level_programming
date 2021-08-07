#include "lists.h"

/**
 * list_len - counts parts of list.
 * @h: head of list.
 *
 * Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}

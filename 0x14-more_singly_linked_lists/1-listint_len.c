#include "lists.h"
/**
 * listint_len - Return number elements in linked list.
 * @h: pointer to head of linked list.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; x++)
		h = h->next;
	return (x);
}

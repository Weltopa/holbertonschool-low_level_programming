#include "lists.h"
/**
 * print_listint - prints all the elements of a singly linked list.
 * @h: pointer to head of list.
 * Return: node count.
 */
size_t print_listint(const listint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}

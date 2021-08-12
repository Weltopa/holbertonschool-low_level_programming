#include "lists.h"
/**
 * add_nodeint - Adds new node to beginning of list.
 * @head: Pointer to head of linked list.
 * @n: Nata.
 * Return: Pointer to new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}

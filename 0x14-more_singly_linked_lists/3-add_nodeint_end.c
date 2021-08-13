#include "lists.h"
/**
 * add_nodeint_end - Add node to list.
 * @head: Pointer to head.
 * @n: Element that goes in node.
 * Return: Address to element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (end->next != NULL)
		end = end->next;

	end->next = new;
	return (*head);
}

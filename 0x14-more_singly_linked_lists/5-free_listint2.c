#include "lists.h"
/**
 * free_listint2 - Frees list then sets head to NULL.
 * @head: Pointer.
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *thd;

	if (!head)
		return;

	while (*head)
	{
		thd = *head;
		*head = thd->next;
		free(temp);
	}
}

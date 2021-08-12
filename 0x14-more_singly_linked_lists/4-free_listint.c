#include "lists.h"
/**
 * free_listint - Frees the list.
 * @head: Pointer to beginning of list.
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
	free(head);
}

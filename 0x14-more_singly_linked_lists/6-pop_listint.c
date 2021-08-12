#include "lists.h"
/**
 * pop_listint - Deletes the head node of linked list.
 * @head: pointer to head of linked list.
 * Return: Deleted head nata.
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head, *temp;
	int nata;

	if (*head == NULL)
		return (0);
	temp = *head;
	nata = temp->n;
	*head = new->next;
	free(temp);
	return (nata);
}

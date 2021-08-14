#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at index.
 * @head: head of list.
 * @index: Index of node.
 * Return: 1 on success, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delnode;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = *head;
	while (--index && temp)
		temp = temp->next;
	if (!temp)
		return (-1);
	delnode = temp->next;
	temp->next = delnode->next;
	free(delnode);
	return (1);
}

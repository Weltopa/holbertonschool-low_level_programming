#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint - adding node to doubly linked list.
 * @head: points to list head.
 * @n: integer data add to node.
 * Return: pointer to node if successful, NULL if fail.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *current = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	if (head)
	{
		if (*head)
		{
			current = *head;
			current->prev = newNode;
		}
		newNode->next = *head;
		*head = newNode;
	}
	return (*head);
}

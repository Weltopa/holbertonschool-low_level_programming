#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint_end - add node at end of a doubly linked list.
 * @head: pointer to head of list.
 * @n: data add to node.
 * Return: pointer to new node if successful, NULL if failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *previous = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (head)
	{
		if (!*head)
		{
			*head = newNode;
			return (*head);
		}
		previous = *head;
		while (previous && previous->next)
			previous = previous->next;
		previous->next = newNode;
		newNode->prev = previous;
	}
	return (newNode);
}

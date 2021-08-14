#include "lists.h"
/**
 * listint_len - Return number of linked elements.
 * @h: Head of list.
 * Return: The number.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_nodeint_at_index - Insert new node at given position.
 * @head: The head of list.
 * @idx: index of list where node should be.
 * @n: Value of new node.
 * Return: Address of node or null.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;

	if (idx > listint_len(*head))
		return (NULL);
	else if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		while (idx--)
		{
			if (idx == 0)
			{
				new = malloc(sizeof(listint_t));
				if (!new)
					return (NULL);
				new->n = n;
				new->next = temp->next;
				temp->next = new;
			}
			else
				temp = temp->next;
		}
	}
	return (new);
}

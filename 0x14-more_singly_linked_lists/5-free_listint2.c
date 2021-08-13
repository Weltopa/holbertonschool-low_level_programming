#include "lists.h"
/**
 * free_listint2 - Frees list then sets head to NULL.
 * @head: Pointer.
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *thd;

	if (!head != NULL)
	{

		thd = *head;
		while (thd != NULL)
		{
			tmp = thd->next;
			free(thd);
			thd = tmp;
		}
		*head = NULL;
	}
}

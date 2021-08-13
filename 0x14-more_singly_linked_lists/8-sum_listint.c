#include "lists.h"
/**
 * sum_listint - Return sum of all data.
 * @head: Pointer to start.
 * Return: The sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

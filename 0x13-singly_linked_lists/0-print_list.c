#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all parts of list
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t node_count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%u] %p\n", ptr->len, ptr->str);
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		node_count++;
		ptr = ptr->next;
	}
	return (node_count);
}

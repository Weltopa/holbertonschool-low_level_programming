#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - return pointer to allocated memory.
 * @b: amount of memory.
 * Return: Pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
		exit(98);
	return (pntr);
}

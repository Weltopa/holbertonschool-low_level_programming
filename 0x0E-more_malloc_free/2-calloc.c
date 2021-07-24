#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for array with malloc.
 * @nmemb: number elements.
 * @size: bytes each element.
 * Return: pointer to memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ary;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ary = malloc(nmemb * size);
	if (ary)
	{
		for (i = 0; i < (nmemb * size); i++)
			ary[i] = 0;
	}
	return (ary);
}

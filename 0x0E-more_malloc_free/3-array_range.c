#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - To reate array.
 * @min: start
 * @max: finish
 * Return: pointer to newly created array.
 */
int *array_range(int min, int max)
{
	int *ary = 0;
	int size = 0;
	int i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ary = malloc(sizeof(int) * size);

	if (ary == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ary[i] = min;
		min++;
	}
	return (ary);
}

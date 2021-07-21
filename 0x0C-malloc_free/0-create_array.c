#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Function that creates an array.
 * @size: size of the array.
 * @c: Specific char to initialize with.
 * Return: Never
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	if (size == 0)
		return (NULL);
	str = malloc((size) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}

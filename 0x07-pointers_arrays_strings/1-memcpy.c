#include "holberton.h"
/**
 * _memcpy - copy memory.
 * @n: bytes from memory.
 * @src: origin.
 * @dest: destination.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

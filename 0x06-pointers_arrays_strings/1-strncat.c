#include "holberton.h"

/**
 * _strncat - Concataenatates two string by n bytes.
 * @src: copied string
 * @dest: string added to
 * @n: number of characters to append.
 * Return: dest string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}

/**
 * _strlen - Function that returns length of a string.
 * @s: Pointed variable
 * Return: pointed variable
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}

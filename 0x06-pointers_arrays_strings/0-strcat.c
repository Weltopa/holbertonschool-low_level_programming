#include "holberton.h"

/**
 * _strcat - Concataenatates two string.
 * @src: added string
 * @dest: string added to
 * Return: concatentated string.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
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

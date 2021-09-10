#include "main.h""
/**
 * _strchr - Locates character in string.
 * @s: pointer
 * @c: character
 * Return: string
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (NULL);
	return (s);
}

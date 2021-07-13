#include "holberton.h"

/**
 * string_toupper - Function that changes lowercase letters to uppercase.
 * @a: char string.
 * Return: never.
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
	return (a);
}

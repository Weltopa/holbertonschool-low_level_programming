#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - To Concatenate two strings, skip characters.
 * @s1: first string
 * @s2: second string
 * @n: character count s2
 * Return: Concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_str;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i;
	unsigned int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n < size2)
		size2 = n;
	con_str = malloc((size1 + size2 + 1) * sizeof(char));
	if (con_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con_str[i] = s1[i];
	for (x = 0; s2[x] != '\0' && x < n; x++, i++)
		con_str[i] = s2[x];
	return (con_str);
}

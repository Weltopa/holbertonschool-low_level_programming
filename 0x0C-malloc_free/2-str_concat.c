#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - To Concatenate two strings.
 * @s1: first string
 * @s2: second string
 * Return: Concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *con_str;
	int size1 = 0;
	int size2 = 0;
	int i;
	int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	con_str = malloc((size1 + size2 + 1) * sizeof(char));

	if (con_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con_str[i] = s1[i];
	for (x = 0; s2[x]; x++, i++)
		con_str[i] = s2[x];

	return (con_str);
}

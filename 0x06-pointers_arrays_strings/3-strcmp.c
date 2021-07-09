#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: dest string.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (s1[i]);
		if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (s2[i] < s1[i)
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != '\0')
		return (0);
	return (0);
}

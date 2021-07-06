#include "holberton.h"

/**
 * rev_string - Function that reverses a string.
 * @s: Pointed variable
 * Return: Never
 */
void rev_string(char *s)
{

	int i = 0;
	int j = 0;
	int temp = 0;

	j = _strlen(s) - 1;
	while (i < j)
	{
	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
	i++;
	j--;
	}
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

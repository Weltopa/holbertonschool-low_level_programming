#include "holberton.h"

/**
 * puts2 - print every other character of string.
 * @str: Pointed variable
 * Return: Never
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
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

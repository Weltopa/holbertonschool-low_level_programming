#include "holberton.h"

/**
 * print_rev - Function that prints a string, in reverse.
 * @s: Pointed variable
 * Return: Never
 */
void print_rev(char *s)
{
	int strength;

	strength = _strlen(s);
	strength--;

	while (s[strength] != '\0')
	{
		_putchar(s[strength]);
		strength--;
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


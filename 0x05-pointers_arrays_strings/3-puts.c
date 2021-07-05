#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line.
 * @str: Pointed variable
 * Return: Never
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

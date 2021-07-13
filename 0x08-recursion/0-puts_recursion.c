#include "holberton.h"

/**
 * _puts_recursion - Function that prints a string followed by new line.
 * @s: Pointed string
 * Return: Never
 */
void _puts_recursion(char *s);
{
	if (*s)
	{
	_putchar(*s++);
	_puts_recursion(s);
	}
	else
	_putchar('\n')
}

#include "holberton.h"

/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: Pointed string
 * Return: Never
 */
int _strlen_recursion(char *s)
{
	if (*s++)
	{
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"

/**
 * print_sign - Function that prints the sign of a number.
 * @n: Taking input for function.
 *Return: Return 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar ('-');
	return (-1);
	}
	else
	{
	_putchar ('0');
	return (0);
	}
}

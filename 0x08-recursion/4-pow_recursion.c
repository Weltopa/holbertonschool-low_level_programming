#include "holberton.h"

/**
 * _pow_recursion - Function that returns the value of x raised to power of y.
 * @x: var for base
 * @y: var for power
 * Return: 0 if successful.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
		return (1);
}

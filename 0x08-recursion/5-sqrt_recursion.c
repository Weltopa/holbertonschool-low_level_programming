#include "holberton.h"

/**
 * square_root - Function that finds square root of n.
 * @a: number to find square root.
 * @square: square root variable.
 * Return: square root.
 */
int square_root(int a, int square)
{
	if (square * square == a)
	{
		return (square);
	}
	if (square * square > a)
	{
		return (-1);
	}
	return (square_root(a, square + 1));
}

/**
 * _sqrt_recursion - Find the square root of n
 * @n: the value of the function.
 * Return: Return -1 if n does not have square root.
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}

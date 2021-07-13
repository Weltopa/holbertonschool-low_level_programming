#include "holberton.h"

/**
 * factorial - Function that returns factorial of given number.
 * @n: Pointed variable
 * Return: -1 to indicate error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}

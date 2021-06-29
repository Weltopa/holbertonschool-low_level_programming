#include "holberton.h"

/**
 * _abs - Computes absolute value of int.
 *
 * @x: absolute value of this number being computed.
 *
 * Return: absolute value of x
 */
int _abs(int x)
{
	if (x < 0)
	{
	x = (x * -1);
	}
	return (x);
}

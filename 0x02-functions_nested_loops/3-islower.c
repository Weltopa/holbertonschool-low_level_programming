#include "holberton.h"

/**
 * _islower - Function that checks lower case letters.
 * @c: Taking input for function.
 *Return: Return 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	return (0);
}

#include "holberton.h"

/**
 * _isupper - Function that checks upper case letters.
 * @c: Taking input for function.
 * Return: Return 1 or 0
 */
int _isupper(int c)
{
	int upper;
	int out;

	out = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		out = 1;
	}
	return (out);
}

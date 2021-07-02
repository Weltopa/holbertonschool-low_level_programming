#include "holberton.h"

/**
 * _isdigit - Function that checksif character is between0 and 9.
 * @c: Taking input for function.
 * Return: Return 1 or 0
 */
int _isdigit(int c)
{
	int digit;
	int out;

	out = 0;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
		out = 1;
	}
	return (out);
}

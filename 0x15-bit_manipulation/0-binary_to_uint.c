#include "holberton.h"
/**
 *  binary_to_uint - convert binary to unsigned int.
 *  @b: binary string.
 *  Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, end = 0, base = 1;
	int i;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			end += base;
		base = base * 2;
	}
	return (end);
}

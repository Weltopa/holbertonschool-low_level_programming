#include "holberton.h"
/**
 * flip_bits - flip m and n.
 * @n: first number.
 * @m: second number.
 * Return: flip bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int end = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			end++;
		m = m >> 1;
		n = n >> 1;
	}
	return (end);
}

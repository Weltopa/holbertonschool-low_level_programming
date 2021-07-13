#include "holberton.h"

/**
 * is_prime_number - Function that returns 1 if the integer is prime, 0 if not.
 * @n: Pointed variable
 * Return: if prime 1, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	return (is_prime_number(n + 1));
}

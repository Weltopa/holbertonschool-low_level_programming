#include "holberton.h"
/**
 * clear_bit - set value of bit at index 0.
 * @index: Where bit changes.
 * @n: Number.
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	aux <<= index, *n &= ~aux;
	return (1);
}

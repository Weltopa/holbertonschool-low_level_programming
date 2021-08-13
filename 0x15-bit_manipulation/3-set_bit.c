#include "holberton.h"
/**
 * set_bit - set value of bit at index of 1.
 * @index: The location of bit.
 * @n: number.
 * Return: 1 on success, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	aux <<= index, *n |= aux;
	return (1);
}

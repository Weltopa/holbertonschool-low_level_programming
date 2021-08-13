#include "holberton.h"
/**
 * get_bit - Retrun value of bit at given index.
 * @index: index of the bit to bite.
 * @n: number.
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= sizeof(unsigned long int) * 8)
		return (1 & (n >> index));
	return (-1);
}

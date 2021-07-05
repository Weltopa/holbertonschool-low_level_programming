#include "holberton.h"

/**
 * swap_int - Funtion that swaps value of two integers.
 * @a: variable one
 * @b: variable two
 * Return: Never
 */
void swap_int(int *a, int *b)
{
	int temp;
	 temp   = *a;
	*a  = *b;
	*b  =  temp;
}

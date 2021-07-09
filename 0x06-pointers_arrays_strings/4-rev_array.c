#include "holberton.h"

/**
 * reverse_array - reverses array contents.
 * @a: reversed array.
 * @n: int.
 * Return: never.
 */
void reverse_array(int *a, int n)
{
	int position, temp, result;

	position = 0;
	result = n - 1;

	while (position <= result)
	{
		temp = a[position];
		a[position] = a[result];
		a[result] = temp;
		position++;
		result--;
}

nclude "holberton.h"

/**
 * print_line - print '_' the number of times.
 * @n: how many _ to print.
 * return: never
 */
void print_line(int n)
{
	if (n > 0)
		for (; n > 0; n--)
			_putchar('_');
	_putchar('\n');
}

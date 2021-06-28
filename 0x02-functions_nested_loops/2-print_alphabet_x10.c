#include "holberton.h"

/**
 * print_alphabet_x10 - a funtion that prints alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int num = 1;

	while (num <= 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		alpha = 'a';
		num++;
	}
}

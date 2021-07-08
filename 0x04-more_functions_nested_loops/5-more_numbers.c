#include "holberton.h"

/**
 * more_numbers - print a long number 10 times.
 *
 * return: never
 */
void more_numbers(void)
{
	int i, b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar('1');
			}
			_putchar(b % 10 + '0');
		}
	_putchar('\n');
	}
}

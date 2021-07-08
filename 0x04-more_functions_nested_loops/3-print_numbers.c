#include "holberton.h"

/**
 * print_numbers - print numbers followed by newline.
 * @x - variable being printed.
 * _putchar - print variable.
 * Return: Never
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

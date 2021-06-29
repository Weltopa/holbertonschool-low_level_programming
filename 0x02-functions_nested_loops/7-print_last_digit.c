#include "holberton.h"

/**
 * print_last_digit - Function that checks lower caseand upper case letters.
 * @n: Taking input for function.
 *Return: Last digit of variable.
 */
int print_last_digit(int n)
{
	int number;

	number = n % 10;
	if (number < 0)
	{
	number = (number * -1);
	}
	_putchar(number + '0');
	return (number);
}

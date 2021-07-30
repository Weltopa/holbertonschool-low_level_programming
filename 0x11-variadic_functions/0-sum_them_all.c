#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* sum_them_all - return sum of arguments.
* @n: ints to sum
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (X = 0; x < n; x++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}

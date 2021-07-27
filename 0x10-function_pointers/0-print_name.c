#include "function_pointers.h"
/**
 * print_name - print the name.
 * @name: the name.
 * @f: pointer to the funtion.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print the name.
 * @name: the name.
 * @f: pointer to the function.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}

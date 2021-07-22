#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Return pointer to copy.
 * @str: Source string
 * Return: NULL if Insufficient.
Char *_strdup(char *str)
{
	char *new_Str;
	int i;
	int length = 0;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	new_str = malloc(sizeof(char) * length));

	if (!new_str)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i]

	new_str[length] = '\0';

	return (new_str);
}
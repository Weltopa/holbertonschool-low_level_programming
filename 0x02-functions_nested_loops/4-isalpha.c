#include "holberton.h"

/**
 * _isalpha - Function that checks lower caseand upper case letters.
 * @c: Taking input for function.
 *Return: Return 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
	{
	return (1);
	}
	else
	return (0);
}

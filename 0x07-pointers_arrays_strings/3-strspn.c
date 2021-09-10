#include "main.h"
/*
 * _strspn - Gets length of a prefix substring.
 * @s: String.
 * @accept: String being checked.
 * Return: Pointer to mem s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, number = 0, prev_number = -1;

	for (x = 0; s[x] && number != prev_number; x++)
	{
		for (y = 0; *(accept + y); y++)
			if (s[x] == accept[y])
				number++;
		prev_number++;
	}
	return (number);
}


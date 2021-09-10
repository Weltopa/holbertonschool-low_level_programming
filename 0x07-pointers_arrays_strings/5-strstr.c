#include "main.h"
/**
 * _strstr - Locates substring.
 * @haystack: String being searched.
 * @needle: String Being searched.
 *
 * Return: Pointer to string
 */
char *_strstr(char *haystack, char *needle)
{
	int pos1 = 0, pos2, count;

	while (needle[count] != 0)
		count++;
	if (count < 1)
	return (haystack);
	while (haystack[pos1] != 0)
	{
		for (pos2 = 0; haystack[pos1 + pos2] == needle[pos2] && haystack[pos1 + pos2] !=0 && needle[pos2] != 0; pos2++)
			if (needle[pos2] == 0)
			return (haystack + pos1);
		pos1++;
	}
	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print file it was compiled from.
 * Return: Never
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

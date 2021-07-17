#include <stdio.h>
/**
 * main - Prints number of arguments.
 * @argc: number of called strings.
 * @argv: pointer.
 * Return: never.
 */
int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", --argc);
	return (0);
}

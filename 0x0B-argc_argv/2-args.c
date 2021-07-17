#include <stdio.h>
/**
 * main - prints  all arguments.
 * @argc: number of arguments.
 * @argv: string
 * Return: never.
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}

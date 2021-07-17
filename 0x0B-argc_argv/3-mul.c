#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple of 2 numbers.
 * @argc: argc, number of args called.
 * @argv: argv, the argument string.
 * Return: never.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

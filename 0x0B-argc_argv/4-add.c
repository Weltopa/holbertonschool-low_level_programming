#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers.
 * @argc: number of arguments.
 * @argv: string of arguments.
 * Return: never.
 */
int main(int argc, char *argv[])
{
	int before = 0;
	int after = 0;
	int n;
	int x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (n = 1; n < argc;  n++)
	{
		for (x = 0; argv[n][x] != '\0'; x++)
		{
			before = argv[n][x];
			if (isdigit(before) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		after += atoi(argv[n]);
	}
	printf("%d\n", after);
	return (0);
}

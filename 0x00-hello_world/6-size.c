#include <stdio.h>
/**
 * main - main funtion
 *
 * Return: Always 0
 */
int main(void)
{
	char char1;
	int int1;
	long int longint1;
	long long int longlongint1;
	float float1;

	printf("Size of a char: %zu byte(s)\n", sizeof(char1));
	printf("Size of an int: %zu byte(s)\n", sizeof(int1));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longint1));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongint1));
	printf("Size of a float: %zu byte(s)\n", sizeof(float1));
	return (0);
}

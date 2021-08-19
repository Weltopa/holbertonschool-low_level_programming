#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_err - This function prints standard error.
 * @filename: Name of file to display.
 * Return: void.
 */
void read_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * write_err - This function prints standard on writing error.
 * @filename: Name of file to display.
 * Return: void.
 */
void write_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * close_err - This function prints to standard on close error.
 * @f: file to use.
 * Return: void.
 */
void close_err(int f)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	exit(100);
}

/**
 * main - Entry point
 * @argc: Number of arguments passed.
 * @argv: Argumnet that are passed.
 * Return: Exit status.
 */
int main(int argc, char **argv)
{
	int f1, f2, reed, written, closepls;
	char buffer[1024];

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 < 0)
		read_err(argv[1]);
	f2 = open(argv[2], O_WRONLY | O_TRUNC | _APPEND);
	if (f2 < 0)
	{
		f2 = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, 0664);
		if (f2 < 0)
			write_err(argv[2]);
	}
	while ((reed = read(f1, buffer, 1024)) > 0)
	{
		written = write(f2, buffer, reed);
		if (written < 0)
			write_err(argv[2]);
	}
	if (reed == -1)
		read_err(argv[1]);
	closepls = close(f1);
	if (closepls < 0)
		close_err(f1);
	closepls = close(f2);
	if (closepls < 0)
		close_err(f2);
	return (0);
}

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <inistd.h>
#include "holberton.h"
/**
 * read_textfile - function reads textfile.
 * POSIX standard output
 * @filename: name.
 * @letters: Characters.
 *
 * Return: Number of letters read and print.
 */
{
	char *buff;
	int f, count, written;

	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	f  = open(filename, O_RDONLY);
	if (f < 0)
		return (0);
	count = read(f, buff, letters);
	if (count < 0)
		return (0);
	buff[count] = '\0';
	written = write(STDOUT_FILENO, buff, count);

	if (written is < 0)
		return (0);
	close(f);
	return (written);
}

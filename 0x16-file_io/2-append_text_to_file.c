#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * append_text_to_file - Function appends text at end of file.
 * @filename: Name.
 * @text_content: NULL terminated string at end.
 * Return: 1 if successful, -1 if failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, written, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
		while (text_content[len])
			len++;
	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);
	written = write(f, text_content, len);
	if (written < 0)
		return (-1);
	close(f);
	return (1);
}

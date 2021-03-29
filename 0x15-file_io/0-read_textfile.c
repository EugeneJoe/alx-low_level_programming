#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters it could read and print, or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars_printed, chars_read;
	char *buf;

	if (filename == NULL || letters < 1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		close(fd);
		return (0);
	}
	chars_read = read(fd, buf, letters);
	if (chars_read < 0)
	{
		free(buf);
		return (0);
	}
	buf[letters] = '\0';
	chars_printed = write(STDOUT_FILENO, buf, chars_read);
	if (chars_printed < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (chars_printed);
}

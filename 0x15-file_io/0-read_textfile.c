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
	int fd, chars_printed;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		free(buf);
		close(fd);
		return (0);
	}
	chars_printed = read(fd, buf, letters);
	if (chars_printed < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[letters] = '\0';
	chars_printed = write(STDIN_FILENO, buf, letters);
	free(buf);
	if (chars_printed < 0 || chars_printed != (int)letters)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (chars_printed);
}

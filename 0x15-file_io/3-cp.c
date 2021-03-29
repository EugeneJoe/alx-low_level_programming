#include "holberton.h"


/**
 * read_error - print error message
 * @file: file read from
 *
 * Return: void
 */
void read_error(const char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * close_error - print error message
 * @fd: file descriptor
 *
 * Return: void
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * cp - copy contents of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: no return value (void)
 */
void cp(const char *file_from, const char *file_to)
{
	int fd, fd2, chars_printed, chars_read;
	char *buf;

	if (file_from == NULL || file_to == NULL)
		read_error(file_from);
	fd = open(file_from, O_RDONLY);
	if (fd < 0)
		read_error(file_from);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		read_error(file_from);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((chars_printed = read(fd, buf, 1024)) > 0)
	{
		buf[chars_printed] = '\0';
		chars_read = write(fd2, buf, chars_printed);
		if (chars_read != chars_printed)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	free(buf);
	if (chars_printed < 0)
	{
		close(fd);
		read_error(file_from);
	}
	if (close(fd) < 0)
		close_error(fd);
	if (close(fd2) < 0)
		close_error(fd2);
}

/**
 * main - copy contents from one file to another
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings that are the arguments to main
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}

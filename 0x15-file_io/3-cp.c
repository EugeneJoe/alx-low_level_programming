#include "holberton.h"

/**
 * update_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to write to the created file
 *
 * Return: no return value (void)
 */
void update_file(const char *filename, char *text_content)
{
	int fd, letters, chars_printed, res;

	if (filename == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", filename);
		exit(99);
	}
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, S_IWUSR | S_IRUSR);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", filename);
		exit(99);
	}
	if (text_content)
	{
		letters = 0;
		while (*(text_content + letters))
			letters++;
		chars_printed = write(fd, text_content, letters);
		if (chars_printed < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			close(fd);
			exit(99);
		}
	}
	res = close(fd);
	if (res < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
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
	int fd, chars_printed, res;
	char *buf;

	if (file_from == NULL || file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd = open(file_from, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while (chars_printed == 0)
	{
		chars_printed = read(fd, buf, 1024);
		if (chars_printed < 0)
		{
			free(buf);
			close(fd);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		buf[chars_printed] = '\0';
		update_file(file_to, buf);
	}
	free(buf);
	res = close(fd);
	if (res < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
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

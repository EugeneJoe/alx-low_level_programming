#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to write to the created file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, letters, chars_printed;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IWUSR | S_IRUSR);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		letters = 0;
		while (*(text_content + letters))
			letters++;
		chars_printed = write(fd, text_content, letters);
		if (chars_printed < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

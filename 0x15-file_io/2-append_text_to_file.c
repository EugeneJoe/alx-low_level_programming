#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to be appended to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, chars_printed, letters;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
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

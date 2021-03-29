#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void close_error(int fd);
void read_error(const char *file);
int append_text_to_file(const char *filename, char *text_content);
void cp(const char *file_from, const char *file_to);

#endif /* HOLBERTON_H */

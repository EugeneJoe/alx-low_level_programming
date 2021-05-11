#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to be printed
 * Return: no return value
 */
void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}

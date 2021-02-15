#include "holberton.h"

/**
 * print_rev - prints a string in reverse order, followed by a new line.
 * @s: string to be printed in reverse order
 * Return: no return value
 */
void print_rev(char *s)
{
	int x, y;

	x = 0;
	y = 0;
	while (*(s + x) != '\0')
		x++;
	for (y = (x - 1); y >= 0; y--)
	{
		_putchar(*(s + y));
	}
	_putchar('\n');
}

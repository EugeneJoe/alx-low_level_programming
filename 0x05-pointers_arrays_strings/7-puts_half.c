#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: no return value
 */
void puts_half(char *str)
{
	int x, y;

	while (*(str + x) != '\0')
	{
		x++;
	}

	y = (x % 2) == 0 ? x / 2 : (x - 1) / 2;
	for (; *(str + y) != '\0'; y++)
		_putchar(*(str + y));
	_putchar('\n');
}

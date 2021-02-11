#include "holberton.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line
 * Return: no return value
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar(x + '0');
	_putchar('\n');
}

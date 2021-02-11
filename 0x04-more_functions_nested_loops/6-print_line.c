#include "holberton.h"

/**
 * print_line - prints _  n times to make a straight line, followed by new line
 * @n: number of times to print _
 * Return: no return value
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

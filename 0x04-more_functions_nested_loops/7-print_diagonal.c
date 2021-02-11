#include "holberton.h"

/**
 * print_line - prints _  n times to make a straight line, followed by new line
 * @n: number of times to print _
 * Return: no return value
 */
void print_diagonal(int n)
{
	int x, y;

	y = 0;
	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			y = x - 1;
			while (y > 0)
			{
				_putchar(' ');
				y--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

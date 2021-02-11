#include "holberton.h"

/**
 * print_triangle - prints a triangle using #, followed by a new line
 * @size: - size of height and width of triangle
 * Return: no return value
 */
void print_triangle(int size)
{
	int y, z, a;

	z = 0;
	a = 0;
	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			z = size - y;
			while (z > 0)
			{
				_putchar(' ');
				z--;
			}
			a = y;
			while (a > 0)
			{
				_putchar('#');
				a--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

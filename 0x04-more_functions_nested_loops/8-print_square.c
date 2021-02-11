#include "holberton.h"

/**
 * print_square - prints a square of side size
 * @size: length of sides of the square
 * Return: no return value
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
			y = 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}

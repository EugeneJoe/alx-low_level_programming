#include "holberton.h"

/**
 * print_number - prints the digits of an interger
 * @n: integer to be printed
 * Return: no return value
 */
void print_number(int n)
{
	unsigned int x, base;

	x = 0;
	base = 10;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	else
	{
		x = n;
	}
	if (x < base)
	{
		_putchar('0' + x);
	}
	else
	{
		while (x >= base)
		{
			base *= 10;
			if (base == 1000000000)
				break;
		}
		if (!(x > 1000000000))
			base /= 10;
		_putchar('0' + (x / base));
		base /= 10;
		while (base >= 10)
		{
			_putchar('0' + ((x / base) % 10));
			base /= 10;
		}
		_putchar('0' + (x % 10));
	}
}

#include "holberton.h"

/**
 * print_digit - prints single digits from int x
 * @x: int to be printed
 * @l: value tracking iteration from print_last_digit
 * Return: no return value
 */
void print_digit(int x, int l)
{
	if (l == 0)
	{
		_putchar(x + '0');
	}
	else
	{
		if (x / 100 != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((x / 100) + '0');
			_putchar(((x % 100) / 10) + '0');
			_putchar(((x % 100) % 10) + '0');
		}
		else if (x / 10 != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(x + '0');
		}
	}

}

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @n: number whose times table is to be printed
 * Return: no return value
 */
void print_times_table(int n)
{
	if (!(n > 16) && !(n < 0))
	{
		int i, j, product;

		i = 0;
		j = 0;
		product = 0;
		while (i <= n)
		{
			while (j <= n)
			{
				product = i * j;
				print_digit(product, j);
				j++;
			}
			_putchar('\n');
			j = 0;
			i++;
		}
	}
}

#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary form
 *
 * Return: no return value (void)
 */
void print_binary(unsigned long int n)
{
	int mask, i, k, check = 0;

	i = (sizeof(unsigned long int) * 8) - 1;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (mask = i; mask >= 0; mask--)
		{
			k = n >> mask;
			if (k & 1)
			{
				_putchar('1');
				check = 1;
			}
			else
			{
				if (check == 1)
					_putchar('0');
			}
		}
	}
}

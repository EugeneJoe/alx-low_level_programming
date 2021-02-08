#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: no return value
 */
void times_table(void)
{
	int table[10][10];
	int i, j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			table[i][j] = i * j;
			if ((table[i][j] / 10) != 0)
			{
				_putchar((table[i][j] / 10) + '0');
				_putchar((table[i][j] % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(table[i][j] + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}

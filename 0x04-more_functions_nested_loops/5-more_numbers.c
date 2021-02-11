#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: no return value
 */
void more_numbers(void)
{
	int x, k, i;

	k = 1;
	while (k <= 10)
	{
		for (x = 0; x < 15; x++)
		{
			i = x / 10;
			switch (i)
			{
			case 1:
				_putchar(i + '0');
			case 0:
				_putchar((x % 10) + '0');
				break;
			default:
				break;
			}
		}
		x = 0;
		k++;
		_putchar('\n');
	}

}

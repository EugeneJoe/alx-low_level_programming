#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer (00:00 to 23:59)
 *
 * Return: no return value
 */
void jack_bauer(void)
{
	int x, y;

	x = 0;
	y = 0;
	while (x <= 23)
	{
		while (y <= 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y++;
		}
		y = 0;
		x++;
	}
}

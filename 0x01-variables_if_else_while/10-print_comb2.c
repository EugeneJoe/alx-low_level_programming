#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j += 1;
		}
		j = 0;
		i += 1;
	}
	putchar('\n');

	return (0);
}

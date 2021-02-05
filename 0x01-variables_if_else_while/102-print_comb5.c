#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			if (i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i == 98)
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		j = i + 1;
		i++;
	}
	putchar('\n');

	return (0);
}

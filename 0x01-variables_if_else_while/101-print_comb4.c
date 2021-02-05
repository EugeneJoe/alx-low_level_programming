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
	int k;

	i = 0;
	j = 1;
	k = 2;
	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				if ((i != k) && (i != j) && (k != j))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
				}
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		j = i + 1;
		i++;
	}
	putchar('\n');

	return (0);
}

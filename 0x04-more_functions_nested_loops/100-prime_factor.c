#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0
 */
int main(void)
{
	long int n;
	long int div, lpf;

	n = 612852475143;
	div = 2;
	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			lpf = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", lpf);
				break;
			}
		}
	}

	return (0);
}

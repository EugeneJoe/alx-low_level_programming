#include <stdio.h>
#include "holberton.h"

/**
 * natural_numbers - prints sum of multiples of 3 and 5 below 1024
 * Return: no return value
 */
void natural_numbers(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
}

/**
 * main - call function natural_numbers
 * Return: Always 0
 */
int main(void)
{
	natural_numbers();

	return (0);
}

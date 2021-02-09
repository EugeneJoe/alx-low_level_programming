#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from a given number to 98,
 *               followed by a new line
 * @n: number to print from
 *
 * Return: no return value
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");

}

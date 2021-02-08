#include "holberton.h"

/**
 * print_sign - prints the sogn of a number i.e. +ve or -ve
 * @n: number whose sign is to be determined
 *
 * Return: 1 if +ve, 0 if 0 and -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @x: number whose last digit is to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int c;

	if (x < 0)
		x *= -1;

	if (x >= 0)
	{
		c = x % 10;
	}
	_putchar('0' + c);
	return (c);
}

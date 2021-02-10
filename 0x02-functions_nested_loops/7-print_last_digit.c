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

	c = x % 10;
	if (c < 0)
		c *= -1;

	_putchar('0' + c);
	return (c);
}

#include "holberton.h"

/**
 * print_number - prints number to screen
 * @n: numbert ot be printed
 * Return: no return value
 */
void print_number(int n)
{
	unsigned int num = 0;

	num = n;
	if (n < 0)
		_putchar('-'),
			num *= -1;

	if (num / 10)
		print_number(num / 10);

	_putchar('0' + num % 10);

}

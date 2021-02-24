#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s:pointer to string to be printed
 *
 * Return:void
 */
void _puts_recursion(char *s)
{
	if (!(*(s)))
		_putchar('\n');
	if (*(s))
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}

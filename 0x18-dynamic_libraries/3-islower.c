#include "holberton.h"

/**
 * _islower - Checks whether the argument is a lowercase alphabet character
 * @c: - argument of type int. Should be a character or a number.
 *
 * Return: 1 if c is lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}

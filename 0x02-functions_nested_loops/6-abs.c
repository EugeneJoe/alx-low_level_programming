#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: The value whose absolute value is to be determined
 *
 * Return: absolute value of x
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}

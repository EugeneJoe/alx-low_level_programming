#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to variable a
 * @b: pointer to variable b
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}

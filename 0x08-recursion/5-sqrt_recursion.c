#include "holberton.h"

/**
 * _sqrtrec - find sqrt of a number
 * @n: number whose sqrt is to be found
 * @x: possible square root of n
 *
 * Return: natural square root of n, else -1
 */
int _sqrtrec(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrtrec(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be found
 *
 * Return: square root of n, else -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrtrec(n, 0));
}

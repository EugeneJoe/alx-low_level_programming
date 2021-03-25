#include "holberton.h"

/**
 * count_set_bits - counts number of set bits
 * @n: number whose set bits are to be counted
 *
 * Return: number of set bits in n
 */
int count_set_bits(unsigned long int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - Returns the number of bits you need to flip to get from integer
 * n to m
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}

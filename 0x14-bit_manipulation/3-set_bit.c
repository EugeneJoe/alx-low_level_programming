#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number whose bit is to be set
 * @index: index of bit to be set to 1
 *
 * Return: 1 on Success, -1, if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (n)
	{
		*n = ((*n & ~mask) | (1 << index));
		return (1);
	}
	else
	{
		return (-1);
	}
}

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
	unsigned long int nn;

	if (n)
	{
		nn = 1;
		while (index > 0)
		{
			nn <<= 1;
			index--;
		}
		*n = *n | nn;
		return (1);
	}
	else
	{
		return (-1);
	}
}

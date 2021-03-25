#include "holberton.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number whose bit is to be acquired
 * @index: index of bit whose value is to be retrieved
 *
 * Return: value of bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (index > 0 && n != 0)
	{
		n >>= 1;
		index--;
	}
	if (n == 0)
		return (-1);
	if (n & 1)
		return (1);
	else
		return (0);
}

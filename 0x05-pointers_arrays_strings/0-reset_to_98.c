#include "holberton.h"

/**
 * reset_to_98 - resets the value of a variable whose address is passed to it
 * through a pointer to 98.
 * @n: pointer containing the address of the variable to be reset.
 * Return: no return value
 */
void reset_to_98(int *n)
{
	*n = 98;
}

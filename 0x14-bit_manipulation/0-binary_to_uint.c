#include "holberton.h"

/**
 * _strlen - finds the length of as string passed to it
 * @s: string whose length is to be found
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted number, or 0 if there is a char in the string that's not 0
 * or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0, res = 0, pow = 0;

	if (b)
	{
		pow = _strlen(b) - 1;
		while (*(b + index))
		{
			if (*(b + index) == '0' || *(b + index) == '1')
				res += (*(b + index) - '0') * (2 << pow) >> 1;
			else
				return (0);
			index++;
			pow--;
		}
		return (res);
	}
	return (0);
}

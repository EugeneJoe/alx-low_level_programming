#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase followed by a new line
 *                      10 times
 *
 * No return value
 */
void print_alphabet_x10(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			_putchar(alph[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

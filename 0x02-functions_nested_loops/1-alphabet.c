#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet letters in ascending order
 *
 * no return value
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (i < 26)
		_putchar(alphabet[i++]);
	_putchar('\n');
}

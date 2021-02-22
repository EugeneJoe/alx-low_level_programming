#include <stdio.h>
#include "holberton.h"

/**
 * print_chessboard - prints chessboard, using the 1st character of each piece
 * name to represent the chess piece
 * @a: 2D array containing the chessboard characters
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int n, m, len, rows;

	len = 0;
	while (*((*a) + len) != 0)
		len++;
	rows = len / 8;
	m = 0;
	while (m < rows)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[m][n]);
		_putchar('\n');
		m++;
		}

}

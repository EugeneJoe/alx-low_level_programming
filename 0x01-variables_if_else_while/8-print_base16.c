#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	char c;

	a = 0;
	c = 'a';
	while (a <= 9)
		putchar(a++ + '0');
	while (c <= 'f')
		putchar(c++);
	putchar('\n');

	return (0);
}

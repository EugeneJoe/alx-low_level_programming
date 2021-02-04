#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
		putchar(a--);
	putchar('\n');

	return (0);
}

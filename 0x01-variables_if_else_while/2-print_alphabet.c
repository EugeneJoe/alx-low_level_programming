#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
		putchar(a++);
	putchar('\n');

	return (0);
}

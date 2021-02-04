#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
		printf("%d", i++);
	putchar('\n');

	return (0);
}

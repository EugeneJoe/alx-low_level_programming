#include "holberton.h"

/**
 * main - call _putchar to print "Holberton".
 *
 * Return: 0 (success)
 */
int main(void)
{
	char hol[9] = "Holberton";
	int i;

	i = 0;
	while (i < 9)
	{
		_putchar(hol[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

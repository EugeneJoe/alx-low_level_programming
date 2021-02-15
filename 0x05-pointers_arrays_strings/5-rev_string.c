#include "holberton.h"

/**
 * rev_string - reverses a string passed to it
 * @s: string to be reversed
 * Return: no return value
 */
void rev_string(char *s)
{
	int x;
	char tmp;
	char *ss, *se;

	x = 0;
	while (*(s + x) != '\0')
		x++;
	ss = s;
	se = s + (x - 1);
	while (se > ss)
	{
		tmp = *ss;
		*ss = *se;
		*se = tmp;
		ss++;
		se--;
	}
}

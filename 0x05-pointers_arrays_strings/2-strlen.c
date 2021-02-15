#include "holberton.h"

/**
 * _strlen - finds the length of as string passed to it
 * @s: string whose length is to be found
 * Return: length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

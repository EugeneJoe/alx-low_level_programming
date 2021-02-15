#include "holberton.h"

/**
 * _strcpy - copies a string pointed to by src to buffer pointed to by dest,
 * including the terminating null byte '\0'
 * @dest: pointer pointing to buffer to which string will be copied
 * @src: pointer pointing to string to be copies
 * Return: pointer pointing to buffer containing copied string
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (*(src + x) != '\0')
		x++;
	for (y = 0; y <= x; y++)
		*(dest + y) = *(src + y);
	return (dest);
}

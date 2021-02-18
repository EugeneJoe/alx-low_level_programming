#include "holberton.h"

/**
 * *_strncpy - copies a maximum of n bytes from string src to dest
 * @dest: pointer to string to be copied into
 * @src: pointer to string whose chars are to be copied
 * @n: max number of bytes to copy from src
 *
 * Return: pointer dest to string that has been copied into
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dlen = 0;
	int count;

	while (*(dest + dlen) != '\0')
		dlen++;
	for (count = 0; count < n && *(src + count) != '\0'; count++)
	{
			*(dest + count) = *(src + count);
	}
	while (count < n)
	{
		*(dest + count) = '\0';
		count++;
	}
	*(dest + dlen) = '\0';

	return (dest);
}

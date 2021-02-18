#include "holberton.h"

/**
 * *_strcat - appends *src to the end of *dest
 * @dest: pointer to the destination string that will contain the
 * concatenated string
 * @src: pointer to the source string that will be appended to the dest string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int x;

	while (*(dest + len) != '\0')
		len++;
	for (x = 0; (*(src + x) != '\0'); x++)
	{
		*(dest + len + x) = *(src + x);
	}
	*(dest + len + x) = '\0';
	return (dest);
}

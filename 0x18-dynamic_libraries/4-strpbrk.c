#include "holberton.h"

/**
 * *_strpbrk - A function that searches for any of a set of bytes
 * @s: string to be searched
 * @accept: string that contains the bytes to be matched in string s
 *
 * Return: if match is found, return pointer to the matching byte in s
 * else return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int found, index, index2;
	char *pos;

	found = 0;
	index = 0;
	pos = 0;
	while (*(s + index) != '\0')
	{
		index2 = 0;
		while (*(accept + index2) != '\0')
		{
			if (*(s + index) == *(accept + index2))
			{
				pos = (s + index);
				found = 1;
				break;
			}
			index2++;
		}
		if (found == 1)
			break;
		index++;
	}

	return (pos);
}

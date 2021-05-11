#include "holberton.h"

/**
 * _strspn - Gets the length of the initial substring of string s that is made
 * up of only those characters in string accept.
 * @s: pointer to be searched
 * @accept: pointer to string containing characters to be searched for in s
 *
 * Return: length of the sibstring found in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length, len2, index, pos, prevpos, index2;

	len2 = 0;
	length = 0;
	while (*(accept + len2) != '\0')
		len2++;
	index = 0;
	prevpos = 0;
	pos = 0;
	while (*(s + index) != '\0')
	{
		if (pos - prevpos > 1)
		{
			length--;
			break;
		}
		for (index2 = 0; index2 < len2; index2++)
		{
			if (*(s + index) == *(accept + index2))
			{
				length++;
				prevpos = pos;
				pos = index;
				break;
			}
		}
		index++;
	}

	return (length);
}

#include "holberton.h"

/**
 * *_strstr - finds the first occurence of a substring in a string
 * @haystack: pointer to string to be searched
 * @needle: pointer to string containing substring being searched for
 *
 * Return: Pointer to beginning of located substring in s, else Null if
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int index, index2, found, m, length;
	char *pos;

	length = 0;
	while (*(needle + length) != '\0')
		length++;
	if (length == 0)
		return (haystack);
	index = 0;
	found = 0;
	while (*(haystack + index) != '\0')
	{
		index2 = 0;
		if (*(haystack + index) == *(needle + index2))
		{
			pos = haystack + index;
			for (m = index, index2 = 0; *(needle + index2) != '\0'
				     && *(haystack + m) != '\0'; m++, index2++)
			{
				if (*(haystack + m) == *(needle + index2))
				{
					found = 1;
				}
				else
				{
					found = 0;
					break;
				}
			}
		}
		if (found == 1)
			break;
		index++;
	}

	if (found == 1)
		return (pos);
	else
		return (0);
}

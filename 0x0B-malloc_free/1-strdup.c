#include <stdlib.h>

/**
 * *_strdup - copies string and stores copy in newly created memory block
 * @str: pointer to string to be copied
 *
 * Return: pointer to copy of given string or NULL if str = NULL, or if failure
 */
char *_strdup(char *str)
{
	char *s;
	int index, length;

	if (str == 0)
		return (0);
	length = 0;
	while (*(str + length))
		length++;
	s = (char *)malloc(sizeof(char) * (length + 1));
	if (s == 0)
		return (0);
	for (index = 0; index < length; index++)
		*(s + index) = *(str + index);
	*(s + index) = '\0';
	return (s);
}

#include <stdlib.h>
#include <stdio.h>

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

	length = 0;
	while (*(str + length) != '\0')
		length++;
	if (length == NULL)
		return (NULL);
	s = malloc(sizeof(char) * length);
	if (s == NULL)
		return (NULL);
	for (index = 0; index < length; index++)
		*(s + index) = *(str + index);
	*(s + index) = '\0';
	return (s);
}

#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - creates an array of chars and initializes it with a specific
 * char.
 * @size: size of array to be initialized
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, or NULL if function fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int index;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		*(s + index) = c;
	return (s);
}

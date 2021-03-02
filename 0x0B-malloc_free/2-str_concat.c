#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings and stores result in dynamically
 * allocated memory space
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to resulting string or NULL on malloc error
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1, len2, index, index2;

	len1 = 0;
	while (*(s1 + len1))
		len1++;
	len2 = 0;
	while (*(s2 + len2))
		len2++;
	s = malloc(sizeof(char) * (len1 + len2));
	if (s == NULL)
		return (NULL);
	for (index = 0; index < len1; index++)
		*(s + index) = *(s1 + index);
	for (index2 = 0; index2 < len2; index2++, index++)
		*(s + index) = *(s2 + index2);
	*(s + (len1 + len2)) = '\0';
	return (s);
}

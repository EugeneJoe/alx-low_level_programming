# include <stdlib.h>

/**
 * *_calloc - allocates memory for an array using malloc and initializes each
 * element to 0
 * @nmemb: size of array
 * @size: size of each element of the array
 *
 * Return: pointer to the array on success, else 0 if nmemb or size is null or
 * if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	for (index = 0; index < nmemb; index++)
		*(ptr + index) = 0;
	return (ptr);
}

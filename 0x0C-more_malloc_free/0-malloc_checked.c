#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b <= 0)
		exit(98);
	ptr = malloc(b);
	if (ptr == 0)
		exit(98);
	return (ptr);
}

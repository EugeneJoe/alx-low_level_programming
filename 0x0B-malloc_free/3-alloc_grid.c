#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - dynamically create 2d array and initialize each element to 0
 * @width: no. of columns
 * @height: no. of rows
 *
 * Return: pointer to the 2d array or NULL if failure occurs
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int index, i, j;

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (index = 0; index < height; index++)
	{
		*(a + index) = malloc(sizeof(int) * width);
		if (*(a + index) == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(a + i) + j) = 0;
	}
	return (a);
}

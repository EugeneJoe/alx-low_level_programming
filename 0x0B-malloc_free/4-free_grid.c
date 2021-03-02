#include <stdlib.h>

/**
 * free_grid - frees a 2d grid that had been dynamiucally created
 * @grid: double pointer to the 2d array
 * @height: no. of rows in the 2d array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(*(grid + index));
	free(grid);
}

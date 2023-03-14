#include <stdlib.h>

/**
 * free_grid - releases the memory used by a matrix of integers
 * @grid: the matrix to free
 * @height: the number of rows in the matrix
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0) /* validate the input parameters */
		return;

	i = 0;
	for (; i < height; i++)
		free(grid[i]); /* release the memory of each row */

	free(grid); /* release the memory of the matrix */
}

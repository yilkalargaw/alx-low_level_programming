#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width
 * @height: height
 *
 * Return: a pointer to the grid, or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0) /* check if width or height is invalid */
		return (NULL);

	grid = malloc(sizeof(int *) * height); /* allocate memory for grid */
	if (grid == NULL) /* check if malloc failed */
		return (NULL);

	i = 0;
	for (; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width); /* allocate memory for each row */
		if (grid[i] == NULL) /* check if malloc failed */
		{
			for (; i >= 0; i--) /* free previously allocated memory */
				free(grid[i]);

			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0; /* initialize each element to 0 */
	}

	return (grid); /* return the pointer to grid */
}

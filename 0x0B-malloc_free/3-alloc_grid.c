#include "main.h"
/**
 * alloc_grid- returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to grid or NULL if fail
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}

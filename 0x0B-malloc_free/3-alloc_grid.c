#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: rows
 * @height: columns
 * Return: a 2 dimensional array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] != NULL)
		{
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
		else
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}

			free(grid);
			return (NULL);
		}
	}

	return (grid);
}


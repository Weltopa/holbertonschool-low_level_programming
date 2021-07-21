#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - 2nd array return.
 * @height: The height.
 * @width: The width.
 * Return: pionter.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			grid[i][x] = 0;
	}
	return (grid);
}

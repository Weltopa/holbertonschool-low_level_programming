#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free grid.
 * @grid: The grid.
 * @height: The height.
 * Return: pionter.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

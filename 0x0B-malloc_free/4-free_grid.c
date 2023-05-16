#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free previously created 2D grid
 * @grid: previous grid
 * @height: its heighht
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

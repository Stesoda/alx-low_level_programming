#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees 2d array
 * @grid: the 2d grid
 * @height: the height dimension of grid
 * Description:this  frees memory of grid
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

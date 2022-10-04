#include "main.h"
#include <stdlib.h>

/**
  *free_grid - free a grid of int
  *@grid: 2d array
  *@height: rows
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}

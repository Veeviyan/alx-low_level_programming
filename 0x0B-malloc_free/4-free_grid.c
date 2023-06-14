#include "holberton.h"
#include <stdlib.h>

/**
  * free_grid - ffrees memory
  * @grid: memory to be freed
  * @height: height of the grid
  *
  * Return:0
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


#include "main.h"
#include <stdlib.h>

/**
 * free_grid - functioin to use
 * @grid: pointer to the array
 * @height: parameter
 * Return: 0
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

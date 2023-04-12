#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory to grid
 * @width: column parameter
 * @height: row parameter
 * Return: NULL or pointer
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(height * sizeof(int *));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));

		if (s[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
				free(s[i]);

			free(s);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}

	return (s);
}

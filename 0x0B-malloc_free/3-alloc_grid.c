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
	int a;
	int i;
	int j;
	int k;

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
			for (j = i; j >= 0; j--)
				free(s[j]);

			free(s);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (a = 0; a < width; a++)
			s[k][a] = 0;
	}

	return (s);
}

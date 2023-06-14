#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimesnsional array
 * @width: width of the array
 * @height: height of the array
 * Return: returns the pointer to the 2 dimesninal array
 **/
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **twodi;

	if (width <= 0 || height <= 0)
		return (NULL);

	twodi = malloc(sizeof(int *) * height);

	if (twodi == NULL)
	{
		free(twodi);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		twodi[i] = malloc(sizeof(int) * width);

		if (twodi[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(twodi[j]);
			}

			free(twodi);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			twodi[k][l] = 0;
		}
	}

	return (twodi);
}

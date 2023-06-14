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
	int **two_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_array = malloc(sizeof(int *) * height);

	if (two_array == NULL)
	{
		free(two_array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		two_array[i] = malloc(sizeof(int) * width);

		if (two_array[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
				free(two_array[i]);

			free(two_array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			two_array[i][j] = 0;
	}

	return (two_array);
}

#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly allocated memory
 **/
int *array_range(int min, int max)
{
	int *ptarray;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptarray = malloc((max - min + 1) * sizeof(int));

	if (ptarray == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ptarray[i] = min;
	}

	return (ptarray);
}

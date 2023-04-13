#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: from range
 * @max: to range
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int n;
	int *s;
	int i;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	s = malloc(n * sizeof(int));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		s[i] = min + i;

	return (s);
}

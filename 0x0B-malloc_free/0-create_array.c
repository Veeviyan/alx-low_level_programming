#include "main.h"
#include <stdlib.h>

/**
 * creat-array - function that cretes an array of characters
 * @size: no of elements in the array
 * @c: initialized with the array of characters
 * Return: NULL if size is 0 and pointer to the array is NULL
 **/

char *create_array(unsigned int size, char c)
{
	char *strArray;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	strArray = malloc(size * sizeof(char));

	if (strArray == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		strArray[i] = c;
	}

	return (strArray);
}

#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: a pointer to a function
 * Return: -1 if no element matches and size is less than 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}

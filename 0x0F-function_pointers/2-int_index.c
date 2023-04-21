#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: array to search
  * @size: number of elements contained in the array
  * @cmp: pointer to the function to be used
  * Return: index of the first element or -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

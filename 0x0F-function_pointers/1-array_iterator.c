#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator - executes function given as a parameter
  * @array: given arrray
  * @size: size of the array
  * @action: pointer to the function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
	{
		return;
	}
	else

		for (i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
}

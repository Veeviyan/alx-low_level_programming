#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = -1;
	int i = 0;
	
	for (i= 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			index = i;
			break;
		}
	}

	return (index);
}

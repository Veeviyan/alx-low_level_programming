#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates a memory using malloc
 * @b: memory to be allocated
 * Return: pointer yyor the newly allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	void *pt = malloc(sizeof(b));

	if (pt == NULL)
		exit(98);

	return (pt);
}

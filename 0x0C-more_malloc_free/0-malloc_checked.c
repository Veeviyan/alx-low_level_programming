#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to check
 * @b: parameter to use
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

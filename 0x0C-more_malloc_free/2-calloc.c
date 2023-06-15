#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: member of the the array
 * @size: no of elements in rhe array
 * Return: pointer to the newly allocated memory
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	unsigned int i;
	char *mempt;

	if (nmemb == 0  || size == 0)
		return (NULL);

	pt = malloc(nmemb * size);

	if (pt == NULL)
		return (NULL);

	mempt = (char *)pt;
	for (i = 0; i < (nmemb * size); i++)
		mempt[i] = 0;

	return (pt);
}

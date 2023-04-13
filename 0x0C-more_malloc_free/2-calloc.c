#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc- contiguous allocation of memory function
 * @nmemb: parameter
 * @size: no of elements
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return  (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	memset(s, 0, nmemb * size);

	return (s);
}

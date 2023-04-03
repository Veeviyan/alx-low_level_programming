#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer at which the memory is copied to.
 * @src: pointer from which the memory is copied.
 * @n: number of bytes to copy
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		dest[index] = src[index];
		n-=1;
	}

	return (dest);
}	

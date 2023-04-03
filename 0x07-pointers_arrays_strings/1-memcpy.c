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
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest++) = *(src++);
	}

	return (dest);
}	

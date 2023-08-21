#include "main.h"

/**
 * _memset - function to fill a memory
 * @s: pointer to the memory region to be filled
 * @b: the byte value to be filled
 * @n: number of bytes to fill
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first pointer
 * @src: second pointer
 * @n: integer  used
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destl = 0;
	int srcl = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destl++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srcl++;
	}
	for (i = 0; i < n; i++)
	{
		dest[destl + i] = src[i];
	}

	return (dest);
}

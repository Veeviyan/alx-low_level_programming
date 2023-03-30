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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;

	}
	dest[i + j] = '\0';

	return (dest);
}

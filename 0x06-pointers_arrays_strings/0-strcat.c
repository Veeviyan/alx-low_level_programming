#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i <= srcl; i++)
	{
		dest[destl + i] = src[i];
	}
	return (dest);
}

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first pointer
 * @src: second pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
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
	for (i = 0; i <= dest[i]; i++)
	{
		dest[destl + i] = src[i];
	}
	return (dest);
}

#include "main.h"

/**
 * _strlen - string length to be returned
 * @s: parameter to be used
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

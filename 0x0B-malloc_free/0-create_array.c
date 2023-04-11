#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: character to initialoize to the array
 * Return: NULL or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}

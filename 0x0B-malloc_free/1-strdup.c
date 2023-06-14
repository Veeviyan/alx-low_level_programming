#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a copy of a string
 * @str: pointer to the initial string
 * Return: pointer to the string copy
 **/

char *_strdup(char *str)
{
	char *newstr;
	int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		size++;
	}
	newstr = malloc((size + 1) * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		newstr[i] = str[i];
	}
	newstr[size] = '\0';

	return (newstr);
}

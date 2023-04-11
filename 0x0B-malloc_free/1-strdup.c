#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to use
 * @str: pointer to thr given string
 * Return: null if str and pointer to str is null
 */

char *_strdup(char *str)
{
	char *s;
	int n = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		n++;

	s = malloc((n * sizeof(char)) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	s[i] = '\0';

	return (s);
}

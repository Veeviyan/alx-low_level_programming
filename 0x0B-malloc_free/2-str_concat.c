#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if the concatenated string is NULL
 **/
char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0;
	int len1, len2 = 0;
	char *twostr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	twostr = malloc((len1 + len2 + 1) * sizeof(char));

	if (twostr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		twostr[k++] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		twostr[k++] = s2[j];
	}

	return (twostr);
}

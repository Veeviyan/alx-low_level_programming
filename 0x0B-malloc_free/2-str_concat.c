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

	if (s1 != NULL)
		for (i = 0; s1[i]; i++)
			len1++;

	if (s2 != NULL)
		for (j  = 0; s2[j]; j++)
			len2++;

	twostr = malloc((i + j + 1) * sizeof(char));

	if (twostr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		twostr[k++] = s1[i];

	for (j = 0; s2[j]; j++)
		twostr[k++] = s2[j];

	twostr[k] = '\0';

	return (twostr);
}

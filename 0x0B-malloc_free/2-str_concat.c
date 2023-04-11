#include "main.h"
#include <stdlib.h>

/**
 * str_concat - to concatenate two string
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to the new string and NUll on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *conc_s;
	int i;
	int j;
	int conc_i = 0;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	conc_s = malloc(((len1 * sizeof(char)) + 1) + ((len2 * sizeof(char)) + 1));

	if (conc_s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		conc_s[conc_i++] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		conc_s[conc_i++] = s2[j];
	}

	return (conc_s);
}





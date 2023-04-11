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
	int s1_len = 0;
	int s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s2_len++;
	}
	conc_s = malloc(((s1_len * sizeof(char)) + (s2_len * sizeof(char))) + 1);

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

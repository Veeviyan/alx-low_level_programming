#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of  bytes from s2
 * Return: pointer to the concatenated string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *twostr;
	unsigned int i, j = 0, length1, length2, twostrlen = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	for (i = 0; s1[i] != '\0'; i++)
		length1++;
	for (j = 0; s2[j] != '\0'; j++)
		length2++;
	if (n >= length2)
		n = length2;

	twostrlen = length1 + n + 1;

	twostr = malloc((twostrlen + 1) * sizeof(char));

	if (twostr == NULL)
		return (NULL);

	for  (i = 0; s1[i]; i++)
		twostr[i] = s1[i];
	for (j = 0; j < n; j++)
		twostr[i + j] = s2[j];

	twostr[i + j] = '\0';

	return (twostr);
}

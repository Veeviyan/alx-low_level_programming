/*
 * File: 1-string_nconcat.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *twostr;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	twostr = malloc(sizeof(char) * (len + 1));

	if (twostr == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		twostr[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		twostr[len++] = s2[index];

	twostr[len] = '\0';

	return (twostr);
}

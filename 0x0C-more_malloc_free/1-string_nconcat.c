#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates string
 * @s1: string 1
 * @s2: string 2
 * @n: integer parameter
 * Return: pointer to the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int s1_length;
	unsigned int s2_length;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	if (n >= s2_length)
		n = s2_length;

	s = malloc(s1_length + n + 1);
	if (s == NULL)
		return (NULL);

	memcpy(s, s1, s1_length);
	memcpy(s + s1_length, s2, n);
	s[s1_length + n] = '\0';

	return (s);
}

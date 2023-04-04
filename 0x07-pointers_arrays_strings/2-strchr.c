#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: a pointer to the string
 * @c: character to be searched for
 * Return: index if matched, -1 if not.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}

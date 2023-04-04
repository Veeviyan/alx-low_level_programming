#include "main.h"

/**
 * _strpbrk - function to search a string
 * @s: the input string
 * @accept: set of bytes
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	
	return (0);
}

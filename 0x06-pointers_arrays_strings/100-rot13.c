#include "main.h"
/**
 * rot13 - function to be used
 * @s: pointer to string
 * Return: *s
 */

char *rot13(char *s)
{
	int i = 0;
	int n = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] += 'a'-'z')
		{
			s[i];
		}
	}

	
	return (s);
}

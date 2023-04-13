#include "main.h"

/**
 * _strspn - prefix substring function
 * @s: pointer to the string
 * @accept: pointer to the prefix string
 * Return: number of  bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	unsigned int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (len);
}

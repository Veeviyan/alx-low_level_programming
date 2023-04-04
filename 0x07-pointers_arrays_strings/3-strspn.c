#include "main.h"

/**
 * _strspn - prefix substring function
 * @s: pointer to the string
 * @accept: pointer to the prefix string
 * Return: number of  bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int sl = 0;
	unsigned int i;

	for (i = 0; i < sizeof(accept); i++)
	{
		if (s[i] == accept[i])
			break;
		sl++;
	}
	return (sl);
}

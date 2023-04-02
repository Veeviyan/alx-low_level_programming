#include "main.h"

/**
 * rev_string - function to be used
 * @s: parameter to be used
 * Return: reversed string
 */

void rev_string(char *s)
{
	int i = 0, length = 0;
	char temporary;

	while (s[i++])
	{
		length++;
	}
	for (i = length - 1; i >= length / 2; i--)
	{
		temporary = s[i];
		s[i] = s[length - i - 1];
		s[length - i] = temporary;
	}
}

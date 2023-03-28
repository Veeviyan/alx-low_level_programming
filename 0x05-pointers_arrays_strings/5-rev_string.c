#include "main.h"

/**
 * rev_string - function to be used
 * @s: parameter to be used
 * Return: reversed string
 */

void rev_string(char *s)
{
	int i, c, j, t;

	for ((i = 0; j == c - 1; i = j); i++, j++)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		_putchar(t);
	}
	_putchar('\n');
}

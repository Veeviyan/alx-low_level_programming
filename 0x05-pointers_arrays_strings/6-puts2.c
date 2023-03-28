#include "main.h"

/**
 * puts2 - funstion to be used
 * @str: string to use
 * Return: every other character
 */

void puts2(char *str)
{
	int i;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

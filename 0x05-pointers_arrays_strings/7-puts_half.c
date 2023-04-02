#include "main.h"

/**
 * puts_half - function to be used
 * length_of_the_string - length of the string to be checked
 * @str: parameter to be used
 * Return: void
 */

void puts_half(char *str)
{
	int i, length = 0, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

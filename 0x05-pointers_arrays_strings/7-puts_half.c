#include "main.h"

/**
 * puts_half - function to be used
 * length_of_the_string - length of the string to be checked
 * @str: parameter to be used
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int n = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		n++;
	}
	if (n % 2 == 1)
	{
		for (i = n - 1 / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (n % 2 == 0)
	{
		for (i = n / 2; i < n; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}

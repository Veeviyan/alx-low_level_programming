#include "main.h"

/**
 * print_line - function to be checked
 *
 * @n: parameter to be checked
 *
 * Return: void
 */

void print_line(int n)
{
	int m;

	for (m = 0; m <= n ; m++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

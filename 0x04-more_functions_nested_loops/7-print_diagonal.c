#include "main.h"

/**
 * print_diagonal - function to be checked
 *
 * @n: parameter to be checked
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int m;

	if (n == 0)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar('\\');
		}
		_putchar(' ');

	_putchar('\n');
	}
}


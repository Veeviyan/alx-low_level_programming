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
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else (i <= n; i++, n++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}


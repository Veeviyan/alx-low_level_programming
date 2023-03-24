#include "main.h"

/**
 * print_most_numbers - function to be checked
 *
 * Return: void
*/

void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a >= 0 && a <= 9)
		{
			if (a == 2)
				continue;
			if (a == 4)
				continue;
		}
		_putchar((a % 10) + '0');
	}
	_putchar('\n');
}

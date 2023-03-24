#include "main.h"

/**
 * more_numbers - function to be checked
 *
 * Return: void
 */

void more_numbers(void)
{
	int result;
	int i;

	for (result = 1; result <= 10; result++)
	{
		for (i = 0; i <= 14; i++)
		{
			if ((i / 10) > 0)
			{
				_putchar((i / 10) + '0');
			}
				_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}

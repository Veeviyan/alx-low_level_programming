#include "main.h"

/**
 * more_numbers - function to be checked
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int result;

	for (i = 1; i <= 10; i++)
	{
		for (result = 0; result <= 14; result++)
		{
			if ((result / 10) > 0)
			{	
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
	_putchar('\n');
	}
}

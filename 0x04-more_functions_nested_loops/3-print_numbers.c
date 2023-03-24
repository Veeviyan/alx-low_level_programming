#include "main.h"

/**
 * print_numbers - function to be printed
 *
 * Return: void
 */

void print_numbers(void)
{
	int a;
	
	for (a = 0; a <= 9; a++)
	{
		if (a >= 0 && a <= 9)
		_putchar((a % 10) + '0');
	}
	_putchar('\n');
}

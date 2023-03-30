#include "main.h"

/**
 * print_square - function to be checked
 * @size: parameter to be used
 * Return: void
 */

void print_square(int size)
{
	int width;
	int height;

	for (width = 0; width < size; width++)
	{
		for (height = 0; height < size; height++)
		{
			_putchar('#');
		}
		if (size == 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

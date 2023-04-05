#include "main.h"

/**
 * _pow_recursion - function to print raised to power
 * @x: base parameter
 * @y: exponent parameter
 * Return: output
 */

int _pow_recursion(int x, int y)
{
	int output;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		output = x * _pow_recursion(x, y - 1);
		return (output);
	}
}

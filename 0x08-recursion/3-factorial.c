#include "main.h"

/**
 * factorial - function to get the factorial of a number
 * @n: number to get the factorial of
 * Return: factorial of the numebr
 **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * factorial - prints factorial of a number
 * @n: number to print
 * Return: -1 if n is lower than 0
 */

int factorial(int n)
{
	int output;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		output = n * factorial(n - 1);
		return (output);
	}
}

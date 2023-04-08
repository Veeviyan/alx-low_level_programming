#include "main.h"

/**
 * _sqrt_recursion_helper - helper function to find square root recursively
 * @n: squared number
 * @i: square root of n
 * Return: return -1 if square root is not natural
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i == n / 2)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - recusrion function
 * @n: squared number
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, 0));
}

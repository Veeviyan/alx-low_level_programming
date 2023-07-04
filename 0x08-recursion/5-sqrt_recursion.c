#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number recursively
 * @n: number to find the sqare root of
 * Return: returns the square root if n has a natural square root,
 * -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int sqr  = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt_fun(n, sqr));
}

/**
 * _sqrt_fun -  finds the natural square root of a number
 * @n: number to find the square root of
 * @sqr: square root to find
 * Return: returns the square root if n has a natural square root,
 * -1 if n does not have a natural square root
 */
int _sqrt_fun(int n, int sqr)
{
	if ((sqr * sqr) == n)
		return (sqr);

	if (sqr == n / 2)
		return (-1);

	return (_sqrt_fun(n, sqr + 1));
}

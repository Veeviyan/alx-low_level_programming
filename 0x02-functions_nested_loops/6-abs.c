#include "main.h"
#include <stdio.h>

/**
 * _abs - checks the absolute value
 *
 * @n: parameter to be computed
 *
 * Return: always n
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n > 0)
		n = n;
	return (n);
}

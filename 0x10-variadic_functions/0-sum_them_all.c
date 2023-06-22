#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums all its parameters
 * @n: total count of all the arguments passed
 * Return: 0 for no parameter else, return sum of arguments
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	int sum = 0;

	va_start(add, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(add, unsigned int);

	va_end(add);

	return (sum);
}

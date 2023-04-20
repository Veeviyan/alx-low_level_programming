#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum of parameters
  * @n: total count of parameters
  * Return: sum of all the parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list sums;
	unsigned int i = 0;
	int result = 0;

	va_start(sums, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sums, int);
	}
	va_end(sums);

	return (result);
}

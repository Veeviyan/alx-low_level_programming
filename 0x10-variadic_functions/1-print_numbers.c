#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separates the numbers
 * @n: total number of arguments
 * Return: void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	unsigned int digits;

	va_start(numbers, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		digits = va_arg(numbers, unsigned int);
		printf("%d", digits);
		if (i < (n - 1))
			printf("%s", separator);
	}

	va_end(numbers);

	printf("\n");
}

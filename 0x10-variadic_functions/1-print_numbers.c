#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - prints numbers
  * @separator: separates the numbers
  * @n: total count of numbers
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prints;
	unsigned int i = 0;

	va_start(prints, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prints, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(prints);

	printf("\n");
}

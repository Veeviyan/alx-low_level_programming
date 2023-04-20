#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints strings
  * @separator: separates the string
  * @n: total count of strings
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);

	if (*separator == '\0')
	{
		va_end(strings);
		return;
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(strings);

	printf("\n");
}

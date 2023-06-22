#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  prints anything
 * @format: list of types of arguments passed
 * Return: void
 **/
void print_all(const char * const format, ...)
{
	va_list data;
	unsigned int a = 0;
	char *separator = ", ";
	char *s;

	va_start(data, format);

	while (format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c%s", va_arg(data, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(data, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(data, double), separator);
				break;
			case 's':
				s = va_arg(data, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				a++;
				continue;
		}
		a++;
	}

	printf("\n");
	va_end(data);
}

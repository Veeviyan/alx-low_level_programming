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

	while (format[a] !=  '\0')
	{
		if (format[a] == 'c')
		{
			printf("%c%s", va_arg(data, int), separator);
		}
		else if (format[a] == 'i')
		{
			printf("%d%s", va_arg(data, int), separator);
		}
		else if (format[a] == 'f')
		{
			printf("%f%s", va_arg(data, double), separator);
		}
		else if (format[a] == 's')
		{
			s = va_arg(data, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		a++;
	}

	va_end(data);

	printf("\n");
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - function to be used
 * @a: first integer
 * @n: second integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function to print sums
 * @a: pointer to the array
 * @size: size of the matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum;

	printf("Enter the matrix elements:\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Sum of the two integers in each cell:\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum = a[i][j] + a[i][j];
			printf("%d ", sum);
		}
		printf("\n");
	}

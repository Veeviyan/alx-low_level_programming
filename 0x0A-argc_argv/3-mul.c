#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if two arguments are passed and 1 2 argumentsare not passed
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	
		printf("%d\n", mul);

	return (0);
}

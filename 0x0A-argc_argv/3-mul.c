#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to check code
 * @argc: number of arguments passed
 * @argv: command line arguments passed
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}

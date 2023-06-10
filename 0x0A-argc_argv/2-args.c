#include "main.h"
#include <stdio.h>

/**
 * main - function to check code
 * @argc: argument count
 * @argv:command line arguments passed
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int count = 0;

	for (; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - to check code
 * @argc: to count command line
 * @argv: to count strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	else
		printf("hi \n");
	
	return (0);
}

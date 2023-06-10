#include "main.h"
#include <stdio.h>

/**
 * main - function to check code
 * @argc: number of arguments passed
 * @argv: command line arguments passed
 * Return: 0
 **/

int main(int argc, char __attribute__((unused))*argv[])
{
	if (argc >= 1)
	{
    		printf("%d\n", argc - 1);
	}
    	return 0;
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *s;
	int i;
	unsigned int j;
	unsigned int add = 0;


	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			for (j = 0; j < strlen(s); j++)
			{
				if (s[j] < 48 || s[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			add = add + atoi(s);
			s++;
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

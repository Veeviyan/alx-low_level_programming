#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv)
{
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc )
	{
		printf("Error\n");
		return (1);
	}
	
	i = atoi(argv[0]);

	for (i = 0; i < argc; i++)
		printf("%d\n", i);

	return (0);
}

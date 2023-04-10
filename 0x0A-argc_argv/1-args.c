#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = atoi(argv[0]);

	if (argc >= 1)
	for (i = 0; i < argc; i++)
		printf("%d\n", i);

	return (0);
}

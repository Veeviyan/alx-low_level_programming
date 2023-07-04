#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - convert the params passed to the program to string
  * @ac: the argument count
  * @av: the argument vector
  * Return: ...
  */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, len  = 0, index = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[index] = av[i][j];
			index++;
		}
		s[index] = '\n';
		index++;
	}

	s[index] = '\0';

	return (s);
}

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - argument to string function
 * @ac: argument count
 * @av: argument vector
 * Return: null or pointer
 */

char *argstostr(int ac, char **av)
{
	char *s; 
	int total = ac;
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			total++;

	s = malloc(total * sizeof(char) + 1); 
	if (s == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	s[k] = '\0';

	return (s);
}

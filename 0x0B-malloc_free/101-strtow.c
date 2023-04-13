#include "main.h"
#include <stdlib.h>

char **strtow(char *str)
{
	char **s;
	int i, j, str_len = 0, words = 0;
	int w_i = 0;
	int w_begin = 0;
	int w_len;

	if (str == NULL || str[0] == 0)
	{
		return NULL;
	}
	for (i = 0; i < str_len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			words++;
		}
	}
	s = malloc((str_len * sizeof(char *)) + 1);
	if (s == NULL)
	{
		return NULL;
	}
	for (i = 0; i <= str_len; i++)
	{
		if (str[i] == '\0' || str[i] == ' ')
		{
			w_len = i - w_begin;
			if (w_len > 0)
			{
				s[w_i] = malloc((w_len * sizeof(char)) + 1);
				if (s[w_i] == NULL)
				{
					for (j = 0; j < w_i; j++)
					{
						free(s[j]);
					}
					free(s);
					return (NULL);
				}
				for (w_begin = 0; w_begin < w_len; w_begin++)
					s[w_i][w_len] = str[i++];

				s[w_i][w_len] = '\0';
			}

		}
	}
	
	s[words] = NULL;

	return (s);
}

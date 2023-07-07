#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: a string of 0 and 1 characters
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			conv_num = conv_num << 1;
		}
		else if (b[i] == '1')
		{
			conv_num = (conv_num << 1) | 1;
		}
		else
		{
			return (0);
		}

		i++;
	}

	return (conv_num);
}


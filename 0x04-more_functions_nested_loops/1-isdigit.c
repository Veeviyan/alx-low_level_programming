#include "main.h"

/**
 * _isdigit - function to be checked
 * @c: parameter to be checked
 * Return: always 0
 */

int _isdigit(int c)
{
	for (c = 0 ; c < 10 ; c++)

	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);

	return (0);
}

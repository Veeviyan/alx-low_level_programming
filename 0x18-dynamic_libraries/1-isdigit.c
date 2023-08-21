#include "main.h"

/**
 * _isdigit - function to be checked
 * @c: parameter to be checked
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

	return (0);
}

#include "main.h"

/**
 * _isupper - function to be checked
 * @c: parameter to be checked
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

	return (0);
}

#include "main.h"

/**
 * _puts_recursion - function to print the string
 * @s: pointer to the string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

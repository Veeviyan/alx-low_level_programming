#include "main.h"

/**
 * _strlen_recursion - function to print a string length
 * @s: string number to print
 * Return: length of the string
 * **/

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		n = 1 + _strlen_recursion(s + 1);
		return (n);
		_putchar('\n');
	}
}

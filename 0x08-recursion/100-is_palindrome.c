#include "main.h"

/**
 * is_palindrome - checks if a string is palindromic or not
 * @s: pointer to the string to be checked
 * Return: returns 1 if the string is palindrome and 0 if it is not
 */

int is_palindrome(char *s)
{
	if (*s - 1 != *s + 1)
		return (0);
	else if (*s + 1 == *s - 1)
		return (1);
	else
		return (is_palindrome(s + 1));
}	

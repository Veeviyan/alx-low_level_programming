#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 if string is palindrome, else 0
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
 * check_palindrome - checks for a palindromic string
 * @s: string to be checked
 * Return: 1 if palindrome, else 0
 */
int check_palindrome(char *s)
{
	int len = find_strlen(s) - 1;

	if (*s == s[len])
	{
		s++;
		len--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
 * find_strlen - finds the length of a string
 * @s: string to check
 * Return: length of the string
 */
int find_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (find_strlen(s) + 1);
}

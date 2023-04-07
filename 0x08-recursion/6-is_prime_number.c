#include "main.h"

/**
 * prime_helper_function - prime helper function
 * @n: parameter to input
 * @i: parameter to be used
 * Return: prime helper function
 */

int prime_helper_function(int n, int i)
{
	if (n <= 1)
		return (0);
	if ((n % i) == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (prime_helper_function(n, i + 1));
}

/**
 * is_prime_number - function
 * @n: prime number parameter
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2;

	return (prime_helper_function(n, i));
}

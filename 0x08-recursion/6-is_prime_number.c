#include "main.h"

/**
 * is_prime_number - function
 * @n: prime number parameter
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n <= 1)
		return (0);
	else if (n % 2 == 0)
		return (0);
	else if (n % 2 == 1)
		return (1);
	else
		return (is_prime_number(n + 1));
}

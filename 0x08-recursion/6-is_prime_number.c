#include "main.h"

/**
 * is_prime_number - checks if a given number is prime number or not
 * @n: number to be checked
 * Return: if number is not prime 0, else 1
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (check_prime(n, divisor));
}

/**
 * check_prime - checks prime
 * @n: number to check
 * @divisor: the divisor
 * Return: if number is divisible 0, else 1
 */
int check_prime(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);

	if (divisor == n / 2)
		return (1);

	return (check_prime(n, divisor + 1));
}

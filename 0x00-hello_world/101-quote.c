#include <stdio.h>
#include <unistd.h>

/**
 * main - prints out the lat part of a quote in the standard error
 *
 * Return: return 1 if success
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}

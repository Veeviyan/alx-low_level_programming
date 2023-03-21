#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
}

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

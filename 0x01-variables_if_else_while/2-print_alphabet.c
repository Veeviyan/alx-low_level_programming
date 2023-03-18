#include <stdio.h>

/** 
 * main - Entry point
 * Return - Always 0 (Success)
 */
int main(void)
{
	/* Get the character to be written */
	char ch = 'a';

	/* Write the character to stdout */
	for (ch = 'a'; ch = 'z'; ch++);
		putchar(ch);

	return (0);
}

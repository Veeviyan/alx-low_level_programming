#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("char size: %lu bytes\n", sizeof(char));
	printf("int size: %lu bytes\n", sizeof(int));
	printf("long int size: %lu bytes\n", sizeof(long int));
	printf("long long int size: %lu bytes\n", sizeof(long long int));
	printf("float size: %lu bytes\n", sizeof(float));
	return (0);
}

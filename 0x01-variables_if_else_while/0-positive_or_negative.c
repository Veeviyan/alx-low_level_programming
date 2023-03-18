#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: print positive or negative
 */
int main(void)
{
	int n;

	printf("Enter a number:");
	scanf("%d\n", &n);
	if (n > 0)
	{
		printf("is positive");
	}
	if (n < 0)
	{
		printf("is negative");
	}
	else
	{
		printf("is zero");
	return (0);
}


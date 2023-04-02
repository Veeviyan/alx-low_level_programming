#include <stdio.h>

int main(void)
{
	int num = 612852475143;
	long long i, largestfactor;

	for (i = 2; i  <= num; i++)
	{
		while (num % i == 0)
		{
			largestfactor = i;
			num /= i;
		}
	}

	printf("The largest prime factor of 612852475143 is %d\n", largestfactor);

	return (0);
}

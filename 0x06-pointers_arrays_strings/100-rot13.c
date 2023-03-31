#include "main.h"

/**
 * rot13 - Encodes a string into rot13
 * @s: String
 *
 * Return: String as a pointer
 */

char *rot13(char *s)
{
	int n;
	int i = 0;
	char message[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotmessage[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i))
	{
		for (n = 0; n <= 52; n++)
		{
			if (*(s + i) == message[n])
			{
				*(s + i) = rotmessage[n];
				break;
			}
		}
	i++;
	}
	return (s);
}

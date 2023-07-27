#include"main.h"

/**
 * rot13- encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest
 */

char *rot13(char *s)
{
	int size = 0;
	int i;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[size] != '\0')
	{
		for (i = 0 ; i < 52 ; i++)
		{
			if (s[size] == input[i])
			{
				s[size] = output[i];
				break;
			}
		}

		size++;
	}

	return (s);
}

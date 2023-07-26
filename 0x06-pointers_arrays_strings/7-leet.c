#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int size = 0;
	int i;
	int lowercase[] = {'a', 'e', 'o', 't', 'l'};
	int uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	int leet[] = {'4', '3', '0', '7', '1'};

	while (s[size] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((s[size] == lowercase[i]) || (s[size] == uppercase[i]))
			{
				s[size] = leet[i];
				break;
			}
		}
		size++;
	}

	return (s);
}

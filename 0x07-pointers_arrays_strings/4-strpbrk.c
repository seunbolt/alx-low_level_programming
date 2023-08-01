#include "main.h"

/**
 * _strpbrk -  locates the first occurrence in the string 's' of any,
 * of the bytes in the string 'accept'
 * @s: char string
 * @accept: char string
 * Return: pointer to s, that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0 ; *(accept + j) != 0 ; j++)
		{
			if (*(s + i) == *(accept + j))
					return (s + i);
		}
	i++;
	}
	return ('\0');
}

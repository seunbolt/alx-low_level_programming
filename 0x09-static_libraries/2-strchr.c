#include "main.h"
/**
 * _strchr- Returns a pointer to the first occurrence of the character,
 * in the string s, or NULL if the character is not found
 * @s: string
 * @c: char
 * Return: returns c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

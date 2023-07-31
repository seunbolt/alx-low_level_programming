#include "main.h"

/**
 * _memset- function fills the first 'n' bytes of the memory area,
 * pointed to by 's' with the constant byte b
 * @s: char string
 * @b: char
 * @n:integer bytes
 * Return: return pointer to s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

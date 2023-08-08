#include<stdlib.h>
#include"main.h"

/**
 * create_array-  creates an array of chars,
 * and initializes it with a specific char
 * @size: siz of character
 * @c: character to be initialized
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char __attribute__((unused))c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * (sizeof(char)));

			for (i = 0 ; i < size ; i++)
			*(ptr + i) = 'c';
			return (ptr);

			free(ptr);
}

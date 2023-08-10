#include<stdlib.h>
#include"main.h"

/**
 *malloc_checked -allocates memory using malloc.
 *@b: size of memory
 *Return: return pointer to memory or exit if failed
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

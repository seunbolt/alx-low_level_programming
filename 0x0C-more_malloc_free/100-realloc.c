#include<stdlib.h>
#include"main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * The contents will be copied to the newly allocated space, in the range from,
 * the start of ptr up to the minimum of the old and new sizes
 * @ptr: pointer to the memory previously allocated
 * @old_size:  size, in bytes, of the allocated space for ptr
 * @new_size:  size, in bytes of the new memory block
 *
 * Return: return ponter to newly allocated pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	free(ptr);

	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}

#include"function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a,
 * parameter on each element of an array
 * @array: array to be iterated
 * @size: size of array
 * @action: pointing to function to be used
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0 ; i < size ; i++)
			(*action)(array[i]);
	}
}

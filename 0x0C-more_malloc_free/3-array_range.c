#include<stdlib.h>
#include"main.h"

/**
 * array_range -  function that creates an array of integers.
 * The array created should contain all the values from min,
 * (included) to max (included), ordered from min to max
 * @min: starting integer
 * @max: maximum integer
 * Return: to newly created array
 */

int *array_range(int min, int max)
{
	int i, size = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = min ; i <= max ; i++)
		*(ptr + i) = i;

	return (ptr);
}

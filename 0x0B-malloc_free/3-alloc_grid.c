#include<stdlib.h>
#include"main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @height: row of array
 * @width: coloum of array
 *
 * Return: return pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **ptr;

	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);

	}
	return (ptr);
}

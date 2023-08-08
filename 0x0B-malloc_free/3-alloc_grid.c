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
	int i, j;
	int **ptr;

	if ((height <= 0) || (width <= 0))
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i-- ; i >= 0 ; i--)
				free(ptr[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);

	for (i = 0; i < height ; i++)
		for (j = 0 ; j < width ; j++)
		free(ptr[i]);

	free(ptr);
}

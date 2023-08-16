#include"function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: array to be iterated
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return:  returns the index of the first element for which the,
 * cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0 ; i < size ; i++)
		{
			index = (*cmp)(array[i]);

			if (index != 0)
			{
				return (i);
			}
		}

		if (index == 0)
			return (-1);

	}
	return (-1);
}

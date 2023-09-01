#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: The index of the bit, starting from 0
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/*Use bitwise OR to set the bit at the specified index to 1*/
	*n = *n | (1 << index);

	return (1);
}

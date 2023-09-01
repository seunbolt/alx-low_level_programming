#include "main.h"

/**
 *clear_bit - Sets the value of a bit to 1 at a given index
 *@n: pointer to number
 *@index: The index of the bit, starting from 0
 *
 *Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/*Use bitwise AND with the complement of index to clear bit*/
	*n = *n & ~(1 << index);

	return (1);
}

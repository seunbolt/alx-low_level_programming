#include "main.h"
/**
 * get_endianness - Checks the endianness of the system. If the first byte
 * (lowest address) contains theleast significant bit, it's little endian
 * Otherwise, it's big endian
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	return (*byte_ptr);
}


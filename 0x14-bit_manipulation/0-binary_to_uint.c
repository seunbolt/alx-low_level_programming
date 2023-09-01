#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: returns converted number or 0 if b is null, b contains char that are
 * not 0 0r 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
		i++;
	}

	return (result);
}


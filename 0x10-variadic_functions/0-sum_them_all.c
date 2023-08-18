#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function sums all parameters passed to it
 * @n: number of parameters passed
 *
 * Return: sum of prameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list sum;

	if (n == 0)
		return (0);

	va_start(sum, n);
	for (i = 0 ; i < n ; i++)
	{
		total += va_arg(sum, int);
	}

	va_end(sum);
	return (total);

}

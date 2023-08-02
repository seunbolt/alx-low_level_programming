#include"main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: given number
 *
 * Return: returns -1 if number less than 0
 */

int factorial(int n)
{
	int s = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	s = n * factorial(n - 1);

	return (s);
}

#include"main.h"

/**
 * is_prime- checks if an integer is prime using a divisor
 * @n: integer to be checked
 *@div: divisor integer
 * Return: returns function
 */

int is_prime(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div * div > n)
		return (1);
	return (is_prime(n, div + 1));
}
/**
 * is_prime_number- checks if an integer is prime
 * @n: integer
 * Return: returns 0 if not prime
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	return (is_prime(n, 2));
}

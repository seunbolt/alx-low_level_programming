#include"3-calc.h"

/**
 * op_add - add two integers
 * @a: first integer value
 * @b: second integer value
 * Return: returns sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtratct integers
 * @a: first integer value
 * @b: second integer value
 * Return: returns difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: seond integer
 * Return: returns product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

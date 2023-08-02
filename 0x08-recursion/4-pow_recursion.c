#include"main.h"

/**
 *_pow_recursion -returns the value of x raised to the power of y
 *@x: base value
 *@y: power raised to base value
 *Return: return -1 if y less than 0
 */
int _pow_recursion(int x, int y)
{
	int s = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	s = x * _pow_recursion(x, y - 1);
	return (s);

}

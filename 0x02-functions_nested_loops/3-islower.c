# include"main.h"

/**
 * _islower - prints output depending on character
 *@c: parameter to be checked
 * Description: prints 1 for lowercase and 0 for others
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

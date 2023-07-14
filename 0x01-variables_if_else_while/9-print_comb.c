#include <stdio.h>
/**
 * main - main Entry
 * Description: Print all possible combinations of single-digit numbers.
 *Numbers should be printed in ascending order
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}

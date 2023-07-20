#include<stdio.h>
#include"main.h"

/**
 * main - entry point
 * Desription: print numbers from 1 to 100 followed by a new line
 * for multiples of 3 print "Fizz" for multiple of 5 print
 * "Buzz" and for multiple of both 3 and 5 print "FizzBuzz"
 * Return: always (0)
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf(" Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);

	}
	printf("\n");

	return (0);
}

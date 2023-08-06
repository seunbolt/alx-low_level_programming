#include<stdio.h>
#include<stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: return 0 success or 1 failure
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	if (argc == 3)
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}


}

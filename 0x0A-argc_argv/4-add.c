#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

/**
 * main - program that adds postive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: return 0 or 1
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

#include<stdio.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}



	return (0);
}

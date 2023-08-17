#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - entry point
 * program that performs simple calculations
 * @argc: argument counter
 * @argv: argument vector
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	char *operators = "+-*/%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (strlen(op) != 1 || strchr(operators, *op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(op))(num1, num2);
	printf("%d\n", result);

	return (0);
}

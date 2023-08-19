#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#define NULL ((void *)0)

/**
 * print_all - function that prints anything
 * @format: list of all types of arguments passed to argument
 * Description: the formats include char(c), integer(i), float(f), char *(s)
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, n;
	va_list args;
	char *format_list = "cifs";
	char *s, *valid;

	n = strlen(format);
	if (format == NULL)
		return;

	va_start(args, format);

	while (i < n)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				(s) ? printf("%s", s) : printf("(nil)");
				break;
			default:
				break;
		}
		valid = strchr(format_list, format[i]);
		(i < n - 1 && valid) ? printf(", ") : 0;
		i++;
	}
	printf("\n");
	va_end(args);

}

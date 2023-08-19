#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: strings to be printed between strings
 * @n: number of strings to be passed to the function
 *
 * Description: funtion prints strings and use separator passed as
 * delimiter and prints (nil) if string is NULL
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	va_start(strings, n);

	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);

		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);

}

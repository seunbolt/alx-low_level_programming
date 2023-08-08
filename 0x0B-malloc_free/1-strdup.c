#include<stdlib.h>
#include"main.h"

/**
 * _strdup- returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string character
 * Return: pointer to string
 */

char *_strdup(char __attribute__((unused))*str)
{
	char *ptr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;


	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return ('\0');

	for (j = 0 ; j <= i ; j++)
	{
		*(ptr + j) = *(str + j);
	}
	return (ptr);

	free(ptr);
}

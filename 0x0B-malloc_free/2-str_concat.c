#include<stdlib.h>
#include"main.h"

/**
 * str_concat -function that concatenates two strings.
 * @s1: destination string
 * @s2: source string
 * Return: return pointer to s1
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < len1 ; i++)
		*(ptr + i) = *(s1 + i);

	for (j = 0; j < len2 ; j++, i++)
		*(ptr + i) = *(s2 + j);

	return (ptr);

	free(ptr);
}

#include<stdlib.h>
#include"main.h"

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: destination string
 * @s2: source string
 * @n: amount of bytes to be used from s2
 * Return: return pointer to string s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, i;
	unsigned int len2 = 0;
	char *ptr;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

	if (n > len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0 ; i < len1 ; i++)
		*(ptr + i) = *(s1 + i);

	for (j = 0 ; j < n ; j++)
		*(ptr + len1 + j) = *(s2 + j);

	*(ptr + len1 + n) = '\0';

	return (ptr);
}

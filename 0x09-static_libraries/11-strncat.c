#include"main.h"

/**
 * _strncat - appends the string pointed to by src
 * using at most n bytes,
 * overwiting the terminating null byte (\0) to the,
 * buffer pointed by dest
 * @dest: destination
 * @src: source
 * @n: integer from source
 * Return: pointer to dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
		if (src[j] == '\0')
			break;
	}

	dest[i] = '\0';
	return (dest);

}

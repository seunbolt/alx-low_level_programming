#include"main.h"

/**
 * _strcat - appends the string pointed to by src,
 * overwiting the terminating null byte (\0) to the,
 * buffer pointed by dest
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */


char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;

	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int amnt = 0;

	while (amnt >= 0)
	{
		*(dest + amnt) = *(src + amnt);
		if (*(src + amnt) == '\0')
			break;
		amnt++;
	}
	return (dest);
}

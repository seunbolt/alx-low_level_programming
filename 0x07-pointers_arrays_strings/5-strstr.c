#include"main.h"

/**
 * _strstr -  finds the first occurrence of the substring needle in the,
 * string haystack. The terminating null bytes (\0) are not compared
 *@haystack: char string
 *@needle: char substring
 *Return: return pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int h_len, n_len;

	h_len = 0;
	while (*(haystack + h_len) != '\0')
		h_len++;
	n_len = 0;
	while (*(needle + n_len) != '\0')
		n_len++;

	for (i = 0; i <= (h_len - n_len); i++)
	{
		for (j = 0 ; j < n_len ; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
		}

		if (j == n_len)
		return (haystack + i);

	}
	return ('\0');

}

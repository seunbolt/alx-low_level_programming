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
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}

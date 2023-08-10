#include<stdlib.h>
#include"main.h"
/**
 * argstostr -concatenates all the arguments of your program
 * @ac:  argument counter
 * @av:  argument vector
 *
 * Return: return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int len, i, j, c;

	if (ac == 0)
		return (NULL);

	/* to get strng length in av */
	for (len = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* to account for new line */
	}

	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = j = c = 0; c < len; j++, c++)
	{
		if (av[i][j] == '\0')
		{
			ptr[c] = '\n';
			i++;
			c++;
			j = 0;
		}
		if (c < len - 1)
			ptr[c] = av[i][j];
	}
	ptr[c] = '\0';

	return (ptr);
}

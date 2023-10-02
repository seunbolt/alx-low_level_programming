#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content:NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write fails, etc)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t file, write_des;
	int count;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
	{
		close(file);
		return (-1);
	}

	if (text_content != NULL)
	{

		for (count = 0; text_content[count] != '\0'; count++)
		{}

		write_des = write(file, text_content, count);

		if (write_des == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}


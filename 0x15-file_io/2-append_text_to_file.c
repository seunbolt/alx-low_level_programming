#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file to be appended
 * @text_content: NULL terminated string to append to file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write fails, etc).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file, write_des;
	int count;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

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


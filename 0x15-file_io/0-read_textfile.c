#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_des, read_des, write_des;
	char *buffer = malloc(letters);

	if ((filename == NULL) || (buffer == NULL))
		return (0);

	file_des = open(filename, O_RDWR);

	if (file_des == -1)
	{
		close(file_des);
		return (0);
	}

	read_des = read(file_des, buffer, letters);

	if (read_des == -1)
	{
		free(buffer);
		close(file_des);
		return (0);
	}

	write_des = write(STDOUT_FILENO, buffer, read_des);

	if ((write_des == -1) || (write_des != read_des))
	{
		free(buffer);
		close(file_des);
		return (0);
	}

	free(buffer);
	close(file_des);
	return (write_des);

}


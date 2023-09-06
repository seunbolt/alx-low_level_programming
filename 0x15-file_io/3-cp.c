#include "main.h"

int copy_text_file(const char *file_from, const char *file_to);
/**
 * main - entry point of the program
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	copy_text_file(argv[1], argv[2]);

	return (0);
}

/**
 * copy_text_file - copy content of file to another file
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: 1 if successful
 */
int copy_text_file(const char *file_from, const char *file_to)
{
	int source, dest;
	ssize_t bytes_read, write_bytes;
	char buffer[1024];

	source = open(file_from, O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}
	dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", file_to);
		exit(99);
	}
	/*read from file_from and write to file_to*/
	while ((bytes_read = read(source, buffer, 1024)) > 0)
	{
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n",
					file_from);
			exit(98);
		}
		write_bytes = write(dest, buffer, bytes_read);
		if (write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					file_to);
			exit(99);
		}
		bytes_read = read(source, buffer, 1024);
	}
	close(source);
	close(dest);
	if ((close(source) != 0) || (close(dest) != 0))
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", (close(source)));
		exit(100);
	}
	return (0);

}


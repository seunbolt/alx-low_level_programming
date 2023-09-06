#include "main.h"

/**
 * main - entry point of the program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int source, dest;
	ssize_t bytes_read, write_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", argv[2]);
		exit(99);
	}
	/*read from file_from and write to file_to*/
	bytes_read = read(source, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}
		if (bytes_read == 0) /*end of file reached*/
			break;

		write_bytes = write(dest, buffer, bytes_read);
		if (write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		bytes_read = read(source, buffer, sizeof(buffer));
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


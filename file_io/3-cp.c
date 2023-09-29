#include "main.h"

void handle_error_1(char *msg, char *opt, int status, int fd1);
void handle_error(char *msg, char *opt, int status);

/**
 * main - entry point of the program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: always 0 success
 */
int main(int argc, char **argv)
{
	int source_fd, dest_fd, bytes_read, write_bytes;
	char buff[1024];

	if (argc != 3)
		handle_error("Usage: cp file_from file_to", "", 97);

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		handle_error("Error: Can't read from file ", argv[1], 98);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		handle_error_1("Error: Can't write to ", argv[2], 99, source_fd);

	bytes_read = read(source_fd, buff, 1024);
	while (bytes_read > 0)
	{
		write_bytes = write(dest_fd, buff, bytes_read);
		if (bytes_read != write_bytes)
			handle_error_1("Error: Can't write to ", argv[2], 99, source_fd);

		bytes_read = read(source_fd, buff, 1024);
	}

	if (bytes_read == -1)
		handle_error("Error: Can't read from file ", argv[1], 98);

	bytes_read = close(source_fd);
	if (bytes_read < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd), exit(100);

	write_bytes = close(dest_fd);
	if (write_bytes < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd), exit(100);

	return (0);
}

/**
 *handle_error_1 - Print the error and close the file descriptor
 *@msg: Error message to show
 *@opt: Optional arguments
 *@status: Exit status code
 *@fd1: File descriptor
 */
void handle_error_1(char *msg, char *opt, int status, int fd1)
{
	if (fd1 > 0)
		close(fd1);

	handle_error(msg, opt, status);
}

/**
 *handle_error - Print the error and close the file descriptor
 *@msg: Error message to show
 *@opt: Optional arguments
 *@status: Exit status code
 */
void handle_error(char *msg, char *opt, int status)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, opt);
	exit(status);
}

#include "main.h"

/**
 * print_err_and_exit - prints the error message & exits the program
 *
 * @err: the error code
 * @filename: the file name
 *
 * Return: void
 */
void print_err_and_exit(int err, char *filename)
{
	if (err == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

	else if (err == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);

	else if (err == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);

	exit(err);
}

/**
 * close_fd - close a file descriptor
 *
 * @fd: the file descriptor
 *
 * Return: void
 */
void close_fd(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 *
 * @argc: number of arguments (should be exactly 3)
 * @argv: arguments values (the cmd, "from" file & "to" file)
 *
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, r, w;
	char *buffer[1024];

	if (argc != 3)
		print_err_and_exit(97, NULL);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		print_err_and_exit(98, argv[1]);

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
		print_err_and_exit(99, argv[2]);

	while ((r = read(from_fd, buffer, 1024)) != 0)
	{
		if (r == -1)
			print_err_and_exit(98, argv[1]);

		w = write(to_fd, buffer, r);
		if (w == -1)
			print_err_and_exit(99, argv[2]);
	}

	close_fd(from_fd);
	close_fd(to_fd);

	return (0);
}


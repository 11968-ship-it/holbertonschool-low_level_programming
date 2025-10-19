#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Print an error message to stderr and exit with the given code (string arg)
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * error_exit_fd - Print an error message with an integer (fd) and exit
 */
void error_exit_fd(int code, const char *message, int fd)
{
	dprintf(STDERR_FILENO, message, fd);
	exit(code);
}

/**
 * write_all - Robustly writes all bytes to a file descriptor
 * @fd: File descriptor to write to
 * @name: Name of the output file (for error messages)
 * @buf: Buffer to write
 * @n: Number of bytes to write
 */
static void write_all(int fd, const char *name, const char *buf, ssize_t n)
{
	ssize_t off = 0, w;

	while (off < n)
	{
		do {
			w = write(fd, buf + off, n - off);
		} while (w == -1 && errno == EINTR);

		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
			exit(99);
		}
		off += w;
	}
}

/**
 * main - Copies the contents of a file to another file.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while (1)
	{
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit(98, "Error: Can't read from file %s\n", argv[1]);
		}
		if (bytes_read == 0)
			break;

		write_all(fd_to, argv[2], buffer, bytes_read);
	}

	if (close(fd_from) == -1)
		error_exit_fd(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit_fd(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}

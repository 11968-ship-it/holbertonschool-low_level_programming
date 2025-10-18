#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 1024
/**
 * main - Entry point for cp program
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, exits with codes on failure
 */
int main(int ac, char **av)
{
    int fd_from, fd_to, r;
    ssize_t w, total_written;
    char buffer[BUF_SIZE];

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }
    fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        close(fd_from);
        exit(99);
    }
    while (1)
    {
        r = read(fd_from, buffer, BUF_SIZE);
        if (r == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
            close(fd_from);
            close(fd_to);
            exit(98);
        }
        if (r == 0)
            break;
        total_written = 0;
        while (total_written < r)
        {
            w = write(fd_to, buffer + total_written, r - total_written);
            if (w == -1)
            {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
                close(fd_from);
                close(fd_to);
                exit(99);
            }
            total_written += w;
        }
    }
    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
    return (0);
}

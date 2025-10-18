/*for open flags*/
#include <fcntl.h>
/*read, write, close*/
#include <unistd.h>
#include <stdlib.h>
/*for ssize_t*/
#include <sys/types.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed,
 * or 0 on failure (file can't be opened/read,
 * filename is NULL, or write fails)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;
if (filename == NULL)
return (0);
/* open the file in read-only mode and store the files descriptor in fd */
fd = open(filename, O_RDONLY);
/*check if opening the file faild returns -1 means ERR then*/
if (fd == -1)
/*on any failur/ NUll retrun 0*/
return (0);
/*allocates memory for the buffer*/
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (bytes_written);
}

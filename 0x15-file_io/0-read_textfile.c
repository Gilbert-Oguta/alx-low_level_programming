#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters:  the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open, fd_write, fd_read;
	char *buffer_alloc;

	if (filename == NULL)
	{
		return (0);
	}

	buffer_alloc = malloc(sizeof(char) * letters);
	if (buffer_alloc == NULL)
	{
		return (0);
	}

	fd_open = open(filename, O_RDONLY);
	fd_read = read(fd_open, buffer_alloc, letters);
	fd_write = write(STDOUT_FILENO, buffer_alloc, fd_read);

	if (fd_open == -1 || fd_read == -1 || fd_write == -1 || fd_write != fd_read)
	{
		free(buffer_alloc);
		return (0);
	}
	free(buffer_alloc);
	close(0);

	return (fd_write);
}

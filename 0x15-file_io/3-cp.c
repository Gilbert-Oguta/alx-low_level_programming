#include "main.h"
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments to the program
 * @argv:array of pointers to the program
 *
 * Return: If the argument count is not correct one - exit code 97.
 * If file_from does not exist or you cannot read it - exit code 98.
 * If file_to cannot be created or written to fails - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int in_fd, out_fd;
	int buffer[1024];
	ssize_t bytes_read, bytes_write;

	if (argc != 3)
	{
		printf("Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	in_fd = open(argv[1], O_RDONLY);
	if (in_fd == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	out_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (out_fd == -1)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		close(in_fd);
		return (99);
	}

	for (;;)
	{
		bytes_read = read(in_fd, buffer, sizeof(buffer));
		if (bytes_read == 0)
			break;
		if (bytes_read == -1)
		{
			printf("Error: Can't read from file %s\n", argv[1]);
			close(in_fd);
			close(out_fd);
			return (98);
		}

		bytes_write = write(out_fd, buffer, bytes_read);
		if (bytes_write == -1)
		{
			printf("Error: Can't write to %s\n", argv[2]);
			close(in_fd);
			close(out_fd);
			return (99);
		}
	}
	close(in_fd);
	close(out_fd);
	return (0);
}

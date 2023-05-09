#include "main.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - function that creates a file.
 * @filename: name of file that is created
 * @text_content: character to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, str = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fdopen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fdopen == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;

		fdwrite = write(fdopen, text_content, strlen(text_content));
		if (fdwrite == -1)
		{
			return (-1);
		}
	}
	close(fdopen);
	return (1);
}

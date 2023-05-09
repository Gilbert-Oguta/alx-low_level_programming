#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file that was created
 * @text_content: charactervto write inside the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, str = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fdopen = open(filename, O_RDWR | O_APPEND);
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

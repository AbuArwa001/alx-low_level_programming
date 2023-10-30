#include "main.h"
#include "strlen.c"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to be appended
 * Return: returns 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);

	if (text_content == NULL && fd != -1)
	{
		return (1);
	}
	else
		if (text_content == NULL && (fd == -1) && (errno == EACCES))
		{
			return (-1);
		}

	write(fd, text_content, _strlen(text_content));
	return (1);


}

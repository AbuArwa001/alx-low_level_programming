#include "main.h"
#include "strlen.c"
/**
 * create_file - a function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return:  on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write(fd, text_content, _strlen(text_content));
	}

	return (1);

}

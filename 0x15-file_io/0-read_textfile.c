#include "main.h"

/**
 * read_textfile - reads  a text file and prints to stdout
 * @filename: name of the file
 * @letters:number of letterss it should read and print
 * Return: returns - the number of letters it could read and print
 *                 0 if the file cannot be oppened
 *                 0 if filename is NULL
 *                 0 if write fails or does not write expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed = 0, written = 0;
	char *readd = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	readed = read(fd, readd, letters);

	if (readed == -1)
		return (0);

	written = write(STDOUT_FILENO, readd, readed);

	if (written == -1 || written != readed)
		return (0);

	close(fd);
	free(readd);
	return (written);
}

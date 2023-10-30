#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
/**
 * closing - it closes file discriptors
 * @fd1: file discriptor1
 * @fd2: ffile dicriptor 2
*/
void closing(int fd1, int fd2)
{
	int  cl1 = 0, cl2 = 0;

	cl1 = close(fd1);

	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	cl2 = close(fd2);

	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 * main - a program that copies contet of a file to another
 * @ac: number of arguments
 * @av: argument vector
 * Return: always returns zero
*/
int main(int ac, char const *av[])
{
	int fd1, fd2, written = 0, reaad = 0;
	char *buff = malloc(1024 * sizeof(char));

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	reaad = read(fd1, buff, 1024);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR
| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	written = write(fd2, buff, reaad);
	if (written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	closing(fd1, fd2);
	return (0);
}

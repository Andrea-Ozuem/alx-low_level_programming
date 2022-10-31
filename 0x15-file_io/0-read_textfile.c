#include "main.h"
#include <stdlib.h>

/**
  *read_textfile - reads a text file and prints it to standard output.
  *@filename: path to file to read from
  *@letters: no of letters to read from filename
  *
  *Return: no of leters read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_write;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	n_write = write(STDOUT_FILENO, buf, letters);
	if (n_write == -1)
		return (0);

	close(fd);
	free(buf);
	return (n_write);
}

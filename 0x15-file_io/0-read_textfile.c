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
	int fd, wr;
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

	n_write = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, letters);
	if (wr == -1)
		return (0);

	close(fd);
	return (n_write);
}

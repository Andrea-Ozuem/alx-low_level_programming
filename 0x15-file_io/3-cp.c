#include "main.h"

/**
  *main - cp implementation
  *@argc: arg count
  *@argv: argument vector
  *
  *Return: 1 to indicate success
  */
int main(int argc, char **argv)
{
	int fd_r, fd_w, buflen, f_c;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_r = open(argv[1], O_RDONLY);
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((buflen = read(fd_r, buf, 1024)) > 0)
		write(fd_w, buf, buflen);

	f_c = close(fd_r);
	if (f_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d", fd_r);
		exit(100);
	}
	f_c = close(fd_w);
	if (f_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d", fd_w);
		exit(100);
	}
	return (0);
}

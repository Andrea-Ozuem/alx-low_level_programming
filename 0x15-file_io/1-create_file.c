#include "main.h"

/**
  *create_file - creates a file
  *@filename: file to rad from
  *@content: contents of file
  *Return: 1 on success
  */
int create_file(const char *filename, char *text_content)
{
	int wr, fd, len;

	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len] != '\0'; len++)
		;
	
	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	
	wr = write(fd, text_content, len);
	if (wr == -1)
		return(-1);

	close(fd);
	return (1);
}

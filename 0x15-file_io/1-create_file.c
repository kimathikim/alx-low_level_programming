#include <string.h>
#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure, or if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t countw;
	int count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		fd = open(filename, O_RDWR | O_CREAT);
	count = strlen(text_content);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	countw = write(fd, text_content, count);
	if (fd == -1 || countw == -1)
		return (-1);

	close(fd);

	return (1);
}

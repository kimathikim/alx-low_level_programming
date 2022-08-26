#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * standard output.
 * @filename: Name of the file to append.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int countw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while(*(text_content + len) != '\0')
		len++;
	countw = write(fd, text_content, len);
	if (countw == -1)
	{
		close(fd);
		write(STDOUT_FILENO, "fail", 5);
		return (-1);
	}
	close(fd);
	return (1);
}

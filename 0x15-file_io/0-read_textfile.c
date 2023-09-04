#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: name of file
 *
 * @letters: number of bytes
 *
 * Return: number byt read/printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byt;
	char bf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	byt = read(fd, &bf[0], letters);
	byt = write(STDOUT_FILENO, &bf[0], byt);
	close(fd);
	return (byt);
}

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
	ssize_t bytes_read, bytes_written;
	char bf[1024];

	if (!filename || letters == 0)
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}

	bytes_read = read(fd, bf, sizeof(bf));

	bytes_written = write(STDOUT_FILENO, bf, bytes_read);

	close(fd);

	return (bytes_written);
}

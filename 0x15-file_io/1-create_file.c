#include "main.h"
/**
 * create_file - function that creates a file
 *
 * @filename: the name the file
 *
 * @text_content: the content text
 *
 * Return: returns 1 on success otherwise -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
    
	if (text_content != NULL) 
	{
        	ssize_t bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1) 
		{
			close(fd);
			return (-1); 
		}
	}
	close(fd);
	return (1);
}

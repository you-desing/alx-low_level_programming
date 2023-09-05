#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @text_content: the content the text
 *
 * @filename: the name the file
 * Return: 1 in success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	FILE *file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}
	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}


#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_cotent: content to write into the file
 * Return: 1 on success and -1 on failure
 */ 
int create_file(const char *filename, char *text_content)
{
	int file;
	int i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			write(file, text_content, i);
		}
	}

	close(file);

	return (1);
}

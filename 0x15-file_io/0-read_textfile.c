#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read;
	ssize_t bytes_written;
	ssize_t opened;
	char *buffer = malloc(letters * sizeof(char *));

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	opened = open(filename, O_RDONLY);
	bytes_read = read(opened, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (opened == -1 || bytes_read == -1)
	{
		free(buffer);
		return (0);
	}
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opened);

	return (bytes_written);
}

#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Description: Opens file, reads up to 'letters' characters,
 * and prints them to standard output. If an error occurs,
 * or if 'filename' is NULL, the function returns 0.
 *
 * Return: The actual number of letters read and printed, or 0 in case of error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fldescription = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t bytes_read = read(fldescription, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL) /* If the file name is NULL, return 0*/
	{
		return (0);
	}

	if (fldescription == -1) /*If opening fails, return 0*/
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(fldescription);
		return (0);
	}

/*If the read fails, free the buffer,close the file and return 0*/
	if (bytes_read == -1)
	{
		free(buffer);
		close(fldescription);
		return (0);
	}

	free(buffer); /*Free the buffer and close the file*/
	close(fldescription);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_written);
}

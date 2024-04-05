#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	/*If text_content is NULL, create an empty file*/
	if (text_content != NULL)
	{
		for (bytes_written = 0; text_content[bytes_written]; bytes_written++)
			;

		if (write(fd, text_content, bytes_written) == -1) {
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

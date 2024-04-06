#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file
 * @argc: numb of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or the appropriate error code
 */

int main(int argc, char *argv[])
{
	int fld_from, fld_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fld_from = open(argv[1], O_RDONLY);
	if (fld_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fld_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fld_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fld_from);
		exit(99);
	}

	while ((bytes_read = read(fld_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fld_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fld_from);
			close(fld_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fld_from);
		close(fld_to);
		exit(98);
	}

	if (close(fld_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fld_from);
		close(fld_to);
		exit(100);
	}

	if (close(fld_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fld_to);
		exit(100);
	}

	return (0);
}

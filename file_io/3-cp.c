#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

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
	char buffer[1024];

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

	fld_to = open(argv[2], O_WRONLY | O_CREAT |
	O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fld_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fld_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fld_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
close_file_description(fld_from, fld_to);
	return (0);
}

/**
 * close_file_description - Funct clse fl descr & exit wth error if the case
 * @fld_from: file description of origin
 * @fld_to: file description ot destination
*/

void close_file_description(int fld_from, int fld_to)
{
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
}

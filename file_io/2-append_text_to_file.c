#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fldescription, write_txt, close_txt;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fldescription = open(filename, O_WRONLY | O_APPEND);
	if (fldescription == -1)
		return (-1);

	write_txt = write(fldescription, text_content, strlen(text_content));
	if (write_txt == -1)
	{
		close(fldescription);
		return (1);
	}

	close_txt = close(fldescription);
	if (close_txt == -1)
		return (-1);

	return (1);
}

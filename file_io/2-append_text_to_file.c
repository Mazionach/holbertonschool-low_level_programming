#include "main.h"

/**
 * append_text_to_file - adds text to a file
 * @filename: the file name
 * @text_content: content to add file
 * Return: success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;

	if (!filename)
		return (-1);
	f = open(filename, O_RDWR | O_APPEND, 0x180);

	if (f == -1)
		return (-1);

	if (text_content)
		if (write(f, text_content, strlen(text_content)) == -1)
			return (-1);
	close(f);
	return (1);
}

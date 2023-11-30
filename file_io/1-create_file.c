#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: content of file
 * Return: success
 */
int create_file(const char *filename, char *text_content)
{
	int f;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0x180);

	if (text_content)
		if (write(f, text_content, strlen(text_content)) == -1)
			return (-1);
	return (1);
}

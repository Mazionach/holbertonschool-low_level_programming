#include "main.h"

/**
 * read_textfile - reads and prints a file
 * @filename: the file name
 * @letters: max letters to print
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int r, f, tmp;
	char *buf;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f = -1)
		return (0);

	buf = malloc(letters);

	if (!buf)
		return (0);
	r = read(f, buf, letters);

	tmp = write(STDOUT_FILENO, buf, r);
	free(buf);
	close(f);

	if (tmp != r)
		return (0);
	return (r);
}

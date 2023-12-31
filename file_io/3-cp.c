#include "main.h"

int mainPart2(char **argv, int f1, int f2);

/**
 * main - copies a file to another
 * @argv: list of arguments
 * @argc: number of arguments
 * Return: success
 */
int main(int argc, char **argv)
{
	int f1, f2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0x1b4);

	if (f1 == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	return (mainPart2(argv, f1, f2));
}

/**
 * mainPart2 - the sequel
 * @argv: arg vlist
 * @f1: file 1
 * @f2: file 2
 * Return: success
 */
int mainPart2(char **argv, int f1, int f2)
{
	int tmp = 1024;
	char buf[1024];

	while (tmp == 1024)
	{
		tmp = read(f1, buf, 1024);
		if (tmp == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n",
					argv[1]);
			close(f1);
			close(f2);
			exit(98);
		}
		if (write(f2, buf, tmp) == -1)
		{
			dprintf(STDERR_FILENO
				, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1);
		close(f2);
		exit(100);
	}
	if (close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f2);
		exit(100);
	}
	return (0);
}

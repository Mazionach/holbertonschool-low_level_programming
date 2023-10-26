#include <stdio.h>
/**
 * main - print arguments
 * @argc: command line argument count
 * @argv: command line argument list
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

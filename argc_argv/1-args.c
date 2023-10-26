#include <stdio.h>
/**
 * main - print argument number
 * @argc: command line argument count
 * @argv: command line argument list
 * Return: success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}

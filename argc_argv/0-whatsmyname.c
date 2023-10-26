#include <stdio.h>
/**
 * main - print own name
 * @argc: command line argument count
 * @argv: command line argument list
 * Return: success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	return (0);
}

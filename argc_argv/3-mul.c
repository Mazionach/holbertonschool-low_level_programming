#include <stdio.h>
/**
 * main - multiplies numbers
 * @argc: command line argument count
 * @argv: command line argument list
 * Return: success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("ERROR");
		return (1);
	}
	printf("%i\n", *argv[1] * *argv[2]);
	return (0);
}

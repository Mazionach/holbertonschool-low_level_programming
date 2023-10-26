#include <stdio.h>
#include <stdlib.h>
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
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

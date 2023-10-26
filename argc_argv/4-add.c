#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Sums numbers
 * @argc: argument count
 * @argv: argument list
 * Return: success
 */
int main(int argc, char *argv[])
{
	int j, sum = 0;
	unsigned int i;

	for (j = 0; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
				{
				printf("Error\n");
				return (1);
				}
		sum = sum + atoi(argv[j]);
	}
	printf("%i\n", sum);
	return (0);
}

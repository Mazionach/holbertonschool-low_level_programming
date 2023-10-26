#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Calculate change
 * @argc: argument count
 * @argv: argument list
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i, c;

	if (argc == 0 || argc > 0)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i >= 25)
	{
		i -= 25;
		c++;
	}
	while (i >= 10)
	{
		i -= 10;
		c++;
	}
	while (i >= 5)
	{
		i -= 5;
		c++;
	}
	while (i >= 2)
	{
		i -= 2;
		c++;
	}
	while (i >= 1)
	{
		i--;
		c++;
	}
	printf("%i\n", c);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - calculator program
 * @argc: argument count
 * @argv: argument array
 * Return: success
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);
	int r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);

	r = f(atoi(argv[1]), atoi(argv[3]));

	printf("%i\n", r);
	return (0);
}

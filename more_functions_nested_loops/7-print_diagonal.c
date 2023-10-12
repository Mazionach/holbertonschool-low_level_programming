#include "main.h"
/**
 * print_diagonal - Print a diagonal line
 *
 * @n: Line length
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		n = 1;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}

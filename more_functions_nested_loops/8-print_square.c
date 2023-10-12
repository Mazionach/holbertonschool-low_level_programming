#include "main.h"
/**
 * print_square - Prints a square
 *
 * @size: Side length of square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = n; i > 0; i--)
	{
		for (j = n; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
}

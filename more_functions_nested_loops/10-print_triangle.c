#include "main.h"
/**
 * print_triangle - Prints a triangle
 *
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = size; i > 0; i--)
	{
		for (j = 1; j <= size; j--)
		{
			if (j <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}


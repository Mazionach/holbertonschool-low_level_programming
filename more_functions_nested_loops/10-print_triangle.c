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
		for (j = 2; j <= size + 1; j++)
		{
			if (j <= i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}


#include "main.h"
/**
 * print_line - Prints a horizontal line
 *
 * @n: Line length
 */
void print_line(int n)
{
	for (; n < 0; n--)
		_putchar('_');
	_putchar('\n');
}

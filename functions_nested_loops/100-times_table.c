#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the nth times table
 *
 * @n: Table to print
 */
void times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			printf(", %4i", i * j);
		}
		_putchar('\n');
	}
}

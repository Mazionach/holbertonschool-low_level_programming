#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the nth times table
 *
 * @n: Table to print
 */
void print_times_table(int n)
{
	int i;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		printf('0');
		printf(", %4i", i);
		printf('\n');
	}
}

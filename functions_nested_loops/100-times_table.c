#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the nth times table
 *
 * @n: Table to print
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		printf("0");
		for (j = 1; j <= n; j++)
			printf(", %3i", i * j);
		printf("\n");
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of array
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	for (; n > 0; n--)
	{
		printf("%d", *a);
		a++;
		if (n != 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(10);
}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints from n to 98
 */
void print_to_98(int n)
{
	while (1)
	{
		printf("%i", n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
			if (n > 98)
				n--;
			else if (n < 98)
				n++;
		} else
		{
			break;
		}
	}
	_putchar('\n');
}

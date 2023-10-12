#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints from n to 98
 *
 * @n: Starting integer
 */
void print_to_98(int n)
{
	while (1)
	{
		if (n != 98)
		{
			printf("%i, ", n);
			if (n > 98)
				n--;
			else if (n < 98)
				n++;
		}
		else
		{
			printf("98\n");
			return;
		}
	}
}

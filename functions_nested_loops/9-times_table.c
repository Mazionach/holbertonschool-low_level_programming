#include "main.h"
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			if ((j * i / 10) == 0)
				_putchar(' ');
			else
				_putchar(j * i / 10 + '0');
			_putchar(j * i % 10 + '0');
		}
		_putchar('\n');
	}
}

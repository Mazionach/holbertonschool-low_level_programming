#include "main.h"
/**
 * print_to_98 - Prints from n to 98
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
